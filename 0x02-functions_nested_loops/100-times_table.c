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
	int R, C, product, tens, units;

	R = 0;
	
	if (n >= 0 && n <= 15)
	{
		while (R <= n)
		{
			C = 0;
			while (C <= n)
			{
				product = R * C;
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
					_putchar(units + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(units + '0');
				}
				C++;
			}
			R++;
			_putchar('\n');
		}
	}
}
