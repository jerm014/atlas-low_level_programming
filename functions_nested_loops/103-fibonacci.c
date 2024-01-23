#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int a;
	long f1;
	long f2;
	long fo;
	long foo;

	f1 = 0;
	f2 = 1;
	fo = 0;
	foo = 0;

	for (a = 1; a != 0;)
	{
		fo = (f1 + f2);
		if (fo < 4000000)
		{
			if ((fo % 2) == 0)
				foo += fo;

			f1 = f2;
			f2 = fo;
			if ((f1 + f2) > 4000000)
				a = 0;
		}
		else
			a = 0;
	}
	printf("%ld\n", foo);

	return (0);
}
