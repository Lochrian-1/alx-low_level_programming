#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: File name
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	char *buff;
	ssize_t x_read, write_x;

	if (filename == NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
	{
		return (0);
	}
	x_read = read(x, buff, letters);
	if (x_read == -1)
	{
		return (0);
	}
	buff[letters + 1] = '\0';
	close(x);

	write_x = write(STDOUT_FILENO, buff, x_read);
	if (write_x == -1)
	{
		return (0);
	}
	free(buff);
	return (x_read);
}
