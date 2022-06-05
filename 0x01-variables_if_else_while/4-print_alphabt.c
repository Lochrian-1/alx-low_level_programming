#include <stdio.h>

/**
 * main - print letters of alphabet in lowercase
 *
 * Description: prints all the letters of the alphabet except
 * for e and q
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
