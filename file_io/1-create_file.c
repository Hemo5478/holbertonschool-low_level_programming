#include "main.h"

/**
 * create_file - A function that create a file
 * @filename: The name of created file
 * @text_content: The content inside the file
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, l, byte_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	l = 0;
	byte_w = 0;
	if (text_content)
	{
		while (text_content[l])
			l++;
		byte_w = write(fd, text_content, l);
		if (byte_w != l)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
