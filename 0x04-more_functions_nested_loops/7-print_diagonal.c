#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n : number of \\ to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	a = 0;

	while (a < n && n > 0)
	{
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
