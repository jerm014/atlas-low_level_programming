#include "main.h"

/**
 * read_textfile- function that reads a text file and prints it to the
 *                POSIX standard output
 *
 * @filename:     the name of the file to print
 * @letters:      how many bytes to read and print
 *
 * Return:        the actual number of bytes it as able to read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char ch;
	char *pch;
	size_t i;

	pch = p;

	if (!filename)
		return (0);

	fptr = fopen(filename, "r");

	if (!fptr)
		return (0);

	for (i = 0; ((i < letters) && (ch != EOF)); i++)
	{
		ch = read(fptr, pch, 1);
		if (!ch)
		{
			fclose(fptr);
			return (0);
		}
		write(1, &ch, 1);
	}

	fclose(fptr);
	return (--i);

}
