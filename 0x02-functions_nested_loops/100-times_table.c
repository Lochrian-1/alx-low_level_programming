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
	int R, C, product;

	if (n >= 0 && n <= 15)
	{
		for (R = 0; n >= R; R++)
		{
			for (C = 0; n >= C; C++)
			{
				product = R * C;
				if (C == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
