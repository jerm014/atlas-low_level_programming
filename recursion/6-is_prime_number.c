#include "main.h"
#include "stdio.h"

int check_prime(int, int);

/**
 * is_prime_number- is a number a prime number or is it not a prime number
 *
 * @n:              number to check
 *
 * Return:          0 - no; 1 - yes
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return(check_prime(n, 2));

}


/**
 * check_prime- see if a number is prime
 *
 * @n: number to check
 * @a: a iterator
 * @b: b iterator
 *
 * Return:      0 - no;  1 - yes
 *
 */

int check_prime(int n, int test)
{
	if (((n % test) == 0) || (test > (n / 2)))
	{
		return (0);
	}

	if (test > (n - 1))
        {
		return(1);
	}
	printf("testing %d\n", test);
	return check_prime(n, ++test);

}
