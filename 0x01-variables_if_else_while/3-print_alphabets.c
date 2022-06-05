#include <stdio.h>

/**
 * main - prints all letters of the alphabet
 *
 * Description: print all letters in both upper and lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}
