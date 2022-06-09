#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit character
 * @c: c is an ASCII character
 *
 * Return:  1 when uppercase and 0 when otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
