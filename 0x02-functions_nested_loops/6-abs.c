#include "main.h"

/**
 * _abs(int) - computes absolute value of interger
 * @c: c is an ascii character
 *
 * Return: void
 */

int _abs(int c)
{
	if (c < 0)
	{
		b = (-1) * c;
		return (b);
	}
	else if (c > 0)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
