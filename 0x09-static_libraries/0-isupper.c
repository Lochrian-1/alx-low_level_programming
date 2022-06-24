#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: c is an ASCII character
 * Return:  1 when uppercase and 0 when otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
