#include "main.h"

int check_prime(unsigned int, unsigned int, unsigned int);

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
	int i = (n / 3);
	int ii = (n / 4);

	if (n <= 1)
		return (0);
	else
		return(check_prime((unsigned int)n, i, ii) > 0);

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

int check_prime(unsigned int n, unsigned int a, unsigned int b)
{
	if ((a == 0) && (b == 0))
		return (1);

	if ((a * b) == n)
		return (0);

	if (b == 0)
	{
		a--;
		b = (n / 4);
	}

	return check_prime(n, a, --b);

}
