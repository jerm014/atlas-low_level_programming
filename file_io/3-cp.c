#include "main.h"

/**
 * main-  main entry point for program
 *
 * @argc: count of arguments
 * @arvg: array of pointers to strings a argenemts
 *
 * Return: 0 on success, 98 or 97 for other errors
 *
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int read_val = 1;
	int write_val;
	char buffer[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	read_val = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n",argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (read_val = read(file_from, buffer, 1024)) > 0)
	{
		write_val = write(file_to, buffer, read_val);
		if (write_val != read_val)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		
			if (close(file_from) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close %d", file_from);
				return (100);
			}
			if (close(file_to) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close %d", file_to);
				return (100);
			}
			return (98);
		}
	}

	if (read_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		if (close(file_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close %s\n", file_from);
			return (100);
		}
		if (close(file_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant close %s\n", file_to);
			return (100);
		}
	}

	return (0);
}

