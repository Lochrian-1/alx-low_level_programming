#include <stdio.h>

/**
 * main - prints out the name of the argument
 * @argc: offset count
 * @argv: offset value
 *
 * Return: 0 whe successful
 */


int main(int argc, char *argv[])
{
		printf("%s\n", argv[argc - 1]);
			return (0);
}
