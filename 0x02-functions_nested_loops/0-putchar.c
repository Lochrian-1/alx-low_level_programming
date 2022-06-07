#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: 0 when successful
 */


int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	while (i < 10)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
