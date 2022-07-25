#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: void
 */

int create_file(const char *filename, char *text_content)
{
	int x, write_x, len;

	if (filename == NULL)
	{
		return (-1);
	}
	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (x == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
		len = 0;
	}
	else
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	write_x = write(x, text_content, len);
	if (write_x == -1)
	{
		return (-1);
	}
	close(x);
	return (1);
}
