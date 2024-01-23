#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int a;
	unsigned long f1A, f1B, f2A, f2B;
	unsigned long lefthalf, righthalf;

    f1A = 0;
    f1B = 0;
    f2A = 0;
    f2B = 1;

	for (a = 1; a <= 98; a++)
	{
		lefthalf = (f1A + f2A);
		righthalf = (f1B + f2B);
		if (righthalf > 9999999999) /* the second half is too large. */
		{
			lefthalf++; /* so increase the left half by one */
			righthalf %= 10000000000; /* take the leading 1 off the right half */
		} /* the trick above is more complicated */
		/* if the numbers get much larger! */
		if (lefthalf == 0)
		    printf("%lu", righthalf); 
		else
		    printf("%lu%lu", lefthalf, righthalf); 
		    
		if (a != 98)
			printf(", ");

		f1A = f2A; /* rotate for next */
		f1B = f2B; /* put f2 into f1 */
		f2A = lefthalf; /* and the new sum */
		f2B = righthalf; /* into f2 */
	}
	printf("\n");

	return (0);
}
