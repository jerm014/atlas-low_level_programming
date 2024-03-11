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
	int fd;
	char ch;
	size_t i = 1;
	size_t out = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (!fd)
		return (0);
	while (i && (out <= letters))
	{
		i = read(fd, &ch, 1);

		if (i)
			write(1, &ch, 1);
		
		out++;
	}

	return (--out);

}
