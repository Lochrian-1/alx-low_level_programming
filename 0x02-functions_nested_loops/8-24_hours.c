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
	int H = 0;
	int h = 0;
	int M = 0;
	int m = 0;

	while (H <= 2)
	{
		while (h < 3)
		{
			while (M <= 59)
			{
				_putchar(H);
				_putchar(':');
				_putchar(M);
				_putchar('\n');
				M++;
			}
			H++;
			M = 0;
	}
}