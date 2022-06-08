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
	int M = 0;

	while (H <= 23)
	{
		while (M <= 59)
		{
			_putchar("%02d:%02d\n", H, M);
			M++;
		}
		H++;
		M = 0;
	}
}
