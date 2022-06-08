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
	int H, h, M, m, max;
	
	max = 58;
	H = 48;

	while (H < 51)
	{
		if (H == 50)
		{
			max = 52;
		}
		h = 48;

		while (h < max)
		{
			M = 48;
			while (M < 54)
			{
				m = 48;
				while (m < 58)
				{
					_putchar(H);
					_putchar(h);
					_putchar(':');
					_putchar(M);
					_putchar(m);
					_putchar('\n');
					m++;
				}
				m = 48;
				M++;
			}
			M = 48;
			h++;
		}
		h =48;
		H++;
	}
}
