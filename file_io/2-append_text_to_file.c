#include "main.h"

/**
 * append_text_to_file- add text to a file
 *
 * @filename:           a pointer to a string that has the filename in it
 * @text:               the text to put in the file
 *
 * Return:              1 for success; -1 on failure (ex; NULL filename or write
 *                      fail)
 *
 */

int append_text_to_file(const char *filename, char *text)
{
	int fd;
	int out_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text)
	{
		out_bytes = write(fd, text, _strlen(text));
		if (out_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
 * _strlen-  determine the length of a string
 *
 * @s:       the string to find the longness of
 *
 * Return:   the longness of the string
 *
 */

int _strlen(char *s)
{
	int pos = 0;

	while (s[pos] != 0)
		pos++;

	return (pos);
}
