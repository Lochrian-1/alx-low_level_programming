#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is a pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i])
	{
		i++;
	}

	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
