#include <unistd.h>
int main(void)
{
	int i = 0;
	char *s;

	s = "Hello, World\n";

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}

	return (0);
}
