#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: is a pointer
 *
 * Return: void
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
