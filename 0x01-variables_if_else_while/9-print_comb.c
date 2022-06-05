#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Description: prints a combinations of single digit numbers
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
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}
