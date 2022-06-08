#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table, starting from 0
 *
 * Return: void
 */

void times_table(void)
{
	int R, C, product, tens, units;

	while (R + 0, R <= 9, R++)
	{
		while (C = 0, C <= 9, C++)
		{
			product = R * C;
			tens = product / 10;
			units = product % 10;

			if (C == 0)
			{
				_putchar(0);
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
		}
	}
	_putchar('\n');
}