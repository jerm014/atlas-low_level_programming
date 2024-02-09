#include "main.h"

int check_prime(int, int, int);

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
	int i = (n / 2);

	return(check_prime(n, i, i) > 0);
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

int check_prime(int n, int a, int b)
{
	if ((a == 0) && (b == 0))
		return (1);

	if ((a * b) == n)
		return (0);

	if (b == 0)
	{
		a--;
		b = (n / 2);
	}

	return check_prime(n, a, --b);

}
