#include <stdio.h>

  
/**
 * main - main entry point
 *
 * Return: nothing
 *
 */

void main(void)
{
	int outcome[1024];
	int a;
	int sum_of_factors;

	sum_of_factors = 0;
    
	for (a = 1; a <= 1024; a++)
		outcome[a] = 0;
        
 	for (a = 1; a <= 1024; a++)
	{
		if ((3 * a) <= 1024)
		{
			outcome[(3 * a)] = 1;
		}
		if ((5 * a) <= 1024)
		{
			outcome[(5 * a)] = 1;
		}
	}

	for (a = 1; a <=1024; a++)
	{
		sum_of_factors += (a * outcome[a]);
	}
	printf("%d\n", sum_of_factors);
}
