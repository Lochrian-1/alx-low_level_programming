#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: 0 when successful
 */

int main(void)

{
	int i = 0;

	while (i < 26)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
