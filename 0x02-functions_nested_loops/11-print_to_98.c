#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: n is an interger
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			_putchar(n);
			for (n != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
			n++;
		}
		else if (n > 98)
		{
			while (n != 98)
			{
				_putchar(n);
				for (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				n--;
			}
		}
	}
	else
	{
		_putchar(98);
	}
}
