#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: n is an interger
 *
 * Description: prints the n times table, starting from 0
 *
 * Return: void
 */

void print_times_table(int n)
{
	int R, C, product, hundreds, tens, units;

	R = 0;

	if (n >= 0 && n <= 15)
	{
		while (n >= R)
		{
			C = 0;
			while (n >= C)
			{
				product = R * C;
				hundreds = product / 100;
				tens = product / 10;
				units = product % 10;
				if (C == 0)
				{
					_putchar('0');
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(units + '0');
				}
				else if (product > 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((tens % 10) + '0');
					_putchar(units + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(hundreds + '0');
					_putchar((tens % 10) + '0');
					_putchar(units + '0');
				}
				C++;
			}
			R++;
			_putchar('\n');
		}
	}
}
