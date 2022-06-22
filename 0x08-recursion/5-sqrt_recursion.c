#include "main.h"

/**
 * sqrt - main - check the code
 * @x: number
 * @y: number of power
 *
 * Return: 0 when succesful.
 */

int sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - computes natural square root of a number
 * @n: an integer number
 *
 * Return: 0 when successful
 */

int _sqrt_recursion(int n)
{
		return (sqrt_a(n, 0));
}
