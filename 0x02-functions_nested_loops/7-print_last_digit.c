#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an ascii character
 *
 * Return: 0 when successful
 */

int print_last_digit(int n)
{
	if (n % 10 == 0)
	{
		return (0);
	}
	else
	{
		n = n % 10;
		return (n);
	}
}
