/**
 * a - a function
 *
 * Return: always zero
 */

int a(void)
{
	for ((((a = 0; a < b; a++))))
	{
		printf("%d\n", a);
	}
	return (0);
}

/**
 * b - a function
 *
 * Return: always zero
 */

int b(void)
{
	for (a = 0; a < b; a++)
		printf("%d\n", a);
	return (0);
}

/**
 * c - a function
 *
 * Return: always zero
 */

int c(void)
{
	for (int a = 0; a < b; a++)
	{
		printf("%d\n", a);
	}
	return (0);
}

/**
 * d - a function
 *
 * Return: always zero
 */

int d(void)
{
	a = 0;
	for (a < b;;)
	{
		printf("%d\n", a++);
	}
	return (0);
}

/**
 * e - a function
 *
 * Return: always zero
 */

int e(void)
{
	a = 0;
	for (; a < b;)
	{
		printf("%d\n", a++);
	}
	return (0);
}
