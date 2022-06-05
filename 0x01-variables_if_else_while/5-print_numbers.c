#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Description: prints single digit numbers of base 10
 * starting at 0
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
