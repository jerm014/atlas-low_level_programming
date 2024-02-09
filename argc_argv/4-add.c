#include <stdio.h>
#include <stdlib.h>

int isNumeric(char *);

/**
 * main-   main entry point, add numbers up, display sum
 *
 * @argc:  length of argv
 * @argv:  arguments passed to executable
 *
 * Return: 0 success or 1 for error
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 0;

	
	for (i = 1; i < argc; i++)
	{
		if (!isNumeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);

}

/**
 * isNumeric- determine if a string has anything besides numbers, -, and +
 *
 * @str:      the string to check
 *
 * Return:    1 true; 0 false
 *
 */

int isNumeric(char *str)
{
    while(*str != '\0')
    {
        if((*str < '0' || *str > '9') && (*str != '-') && (*str != '+'))
            return (0);
        str++;
    }
    return (1);
}
