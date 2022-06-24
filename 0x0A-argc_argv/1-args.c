#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: integer
 * @argv: list
 *
 * Return: 0 when successful
 */

int main(int argc, char const *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);
	return (0);
}
