#include "main.h"

/**
 * main-  main entry point for program
 *
 * @argc: count of arguments
 * @argv: array of pointers to strings a argenemts
 *
 * Return: 0 on success, 98 or 97 for other errors
 *
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, read_val = 1, write_val;
	char buffer[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		return (cant_read(argv[1], 98));
	
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to == -1)
		cant_write(argv[2], 99);

	while ((read_val = read(file_from, buffer, 1024)) > 0)
	{
		write_val = write(file_to, buffer, read_val);
		if (write_val != read_val)
		{
			cant_write(argv[2], 0);
			if (close(file_from) == -1)
				return (cant_close(argv[1], 100));

			if (close(file_to) == -1)
				return (cant_close(argv[2], 100));

			return (98);
		}
	}

	if (read_val == -1)
		return (cant_read(argv[1], 98));
	if (close(file_from) == -1)
		return (cant_close(argv[1], 100));
	if (close(file_to) == -1)
		return (cant_close(argv[2], 100));
	return (0);
}

/**
 * cant_close- error can't close filename and return value
 *
 * @filename:  the name of the file that can't be closed
 * @ret:       the return value
 *
 * Return:     int from @ret
 *
 */

int cant_close(char *filename, int ret)
{
	dprintf(STDERR_FILENO, "Error: Can't close %s\n", filename);
	return (ret);
}

/**
 * cant_write- error can't write to filename and return value
 *
 * @filename:  the name of the file that can't be written to
 * @ret:       the return value
 *
 * Return:     int from @ret
 *
 */

int cant_write(char *filename, int ret)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (ret);
}

/**
 * cant_read- error can'tread to filename and return value
 *
 * @filename: the name of the file that can't be read from
 * @ret:      the return value
 *
 * Return:    int from @ret
 *
 */

int cant_read(char *filename, int ret)
{
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
	return (ret);
}
