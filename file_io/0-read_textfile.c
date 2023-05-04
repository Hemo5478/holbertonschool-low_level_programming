#include "main.h"


/**
 * read_textfile - A function that reads a text file and prints it
 * @filename: A filename
 * @letters: Size
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t tot_read;
	ssize_t nread, nwritten;
	char buf[1024];

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	tot_read = 0;

	while ((nread = read(fd, buf, sizeof(buf))) > 0)
	{
		nwritten = write(STDOUT_FILENO, buf, nread);
		if (nwritten != nread)
		{
			close(fd);
			return (0);
		}
		tot_read += nread;
		if (tot_read >= letters)
		{
			break;
		}
	}

	buf[tot_read] = '\0';

	close(fd);
	return (tot_read);
}
