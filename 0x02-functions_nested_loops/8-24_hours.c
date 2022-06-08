#include "main.h"

/**
 * jack_bauer -prints every minute of the day of Jack Bauer
 *
 * Description:prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int H = '0';
	int M = '0';

	while (H <= '23')
	{
		if (H < '10')
		{
			_putchar('0');
			_putchar(H);
		}

		while (M <= '59')
		{
			if (M < '10')
			{
			_putchar('0');
			_putchar(M);
			}

			_putchar(H);
			_putchar(':');
			_putchar(M);
			_putchar('\n');
			M++;
		}
		H++;
		M = '0';
	}
}
