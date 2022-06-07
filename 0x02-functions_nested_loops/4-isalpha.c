#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: c is an ascii character
 *
 * Descriptions: checks for alphabetic characters
 *
 * Return: 1 when alphabetic character and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
