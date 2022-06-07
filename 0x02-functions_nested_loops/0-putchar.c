#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: 0 when successful
 */

#include 'main.h'

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		printf(text[i]);
	}
	printf(\n);

	return (0);
}
