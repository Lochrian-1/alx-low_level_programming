#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an ascii character
 *
 * Description: prints the sign for a number
 *
 * Return: 1 if positice, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
