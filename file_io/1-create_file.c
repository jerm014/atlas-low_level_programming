#include "main.h"

/**
 * create_file- create a file. permissions should be rw-------. if the file
 *              exists, truncate it. if the file exists don't change
 *              permissions.
 *
 * @filename:   a pointer to a string that has the filename in it
 * @text:       the text to put in the file
 *
 * Return:      1 for success; -1 on failure (ex; NULL filename or write fail)
 *
 */

int create_file(const char *filename, char *text)
{
	int fd;
	size_t out_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUC, 0600);

	if (fd == -1)
		return (-1);

	if (text)
	{
		out_bytes = write(fd, text, strlen(text));
		if (bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
