#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: A string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: The name of created file
 * @text_content: The content inside the file
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		byte_w = write(fd, text_content, _strlen(text_content));
		if (byte_w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
