#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Successful, always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (abs(n % 10) == 0)
	{
	    printf("Last digit of %d is 0", n);
	}
	else
	{
        if (abs(n % 10) > 5)
        {
            printf("Last digit of %d is %d and is greater than 5", n, abs(n % 10));
        }
        else
        {
            printf("Last digit of %d is %d and is less than 6 and not 0", n, abs(n % 10));
        }
    }
    return (0);
}
