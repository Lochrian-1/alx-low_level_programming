#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @n : amount of # to be printed
 *
 * Return: void
 */

void print_square(int n)
{
	int a, b;

	a = 0;
	while (a < n && n > 0)
	{
		b = 0;
		while (b < n)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
	_putchar('\n');
}
