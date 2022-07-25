#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at end of file
 *
 * Return: void
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, len, x_write;

	if (filename == NULL)
	{
		return (-1);
	}
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	x_write = write(x, text_content, len);
	if (x_write == -1)
	{
		return (-1);
	}
	close(x);
	return (1);
}
