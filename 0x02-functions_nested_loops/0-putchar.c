#include <stdio.h>
#include <main.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: 0 when successful
 */


int main(void)
{
	char text[1] = "_putchar";
	int i = 0;

	for (i < 10)
	{
		_putchar(text[i]);
	}
	_putchar(\n);

	return (0);
}
