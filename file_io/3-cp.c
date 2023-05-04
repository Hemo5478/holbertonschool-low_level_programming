#include "main.h"

/**
 * main - A program that copies the content of a file to another file
 * @argc: An arg counter
 * @argv: An arg value
 * Return: 0 (success), 97-100 (exit value errors)
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, byte_r, byte_w;
	char buffer[1024];
	int ex;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	switch (fd_from)
	{
		case -1:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
			break;
		default:
			break;
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	switch (fd_to)
	{
		case -1:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
			break;
		default:
			break;
	}

	ex = 0;
	while ((byte_r = read(fd_from, buffer, 1024)) > 0)
	{
		byte_w = write(fd_to, buffer, byte_r);
		switch (byte_w)
		{
			case -1:
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				ex = 99;
				break;
			default:
				break;
		}
		if (byte_w != byte_r)
		{
			ex = 99;
			break;
		}
	}

	switch (byte_r)
	{
		case -1:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			ex = 98;
			break;
		default:
			break;
	}

	switch (close(fd_from))
	{
		case -1:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			ex = 100;
			break;
		default:
			break;
	}

	switch (close(fd_to))
	{
		case -1:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			ex = 100;
			break;
		default:
			break;
	}

	exit(ex);
}
