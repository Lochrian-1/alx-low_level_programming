#include "main.h"

/**
 * error_messages - Displays the various error messages for different errors
 * @exit_code: Exit code
 * @err_msg: Error message
 * @type: Data type
 *
 * Return: void
 */

void error_messages(int exit_code, char *err_msg, char type, ...)
{
	va_list ar;

	va_start(ar, type);
	if (type == 's')
	{
		dprintf(STDERR_FILENO, err_msg, va_arg(ar, char *));
	}
	else if (type == 'd')
	{
		dprintf(STDERR_FILENO, err_msg, va_arg(ar, int));
	}
	else if (type == 'N')
	{
		dprintf(STDERR_FILENO, err_msg, "");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Invalid type");
	}

	va_end(ar);
	exit(exit_code);
}

/**
 * main - Program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int x, y;
	char buff[1024];
	ssize_t x_read, y_write;

	if (argc != 3)
	{
		error_messages(97, "Usage: cp file_from file_to\n", 'N');
	}
	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		error_messages(98, "Error: Can't read from file %s\n", 's', argv[1]);
	}
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (y == -1)
	{
		error_messages(99, "Error: Can't write to %s\n", 's', argv[2]);
	}
	while ((x_read = read(x, buff, 1024)) > 0)
	{
		y_write = write(y, buff, x_read);
		if (y_write == -1)
		{
			error_messages(99, "Error: Can't write to %s\n", 's', argv[2]);
		}
	}
	if (x_read == -1)
	{
		error_messages(98, "Error: Can't read from file %s\n", 's', argv[1]);
	}
	if (close(x) == -1)
	{
		error_messages(100, "Error: Can't close fd %d\n", 'd', x);
	}
	if (close(y) == -1)
	{
		error_messages(100, "Error: Can't clode fd %d\n", 'd', y);
	}
	return (0);
}
