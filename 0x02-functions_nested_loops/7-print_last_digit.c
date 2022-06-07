#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an ascii character
 *
 * Return: void
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (n < 0)
	{
		c = (-1) * c;
	}
	_putchar(c + '0');
	
	return (c);
}
