/**
 * swap_int- swap two int variables values
 *
 * @a: the first int variable
 * @b: the second int varibale
 *
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
