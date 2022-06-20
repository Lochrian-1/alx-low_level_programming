#include "main.h"

/**
 * * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: first occurance of a character
 *
 * Return: void
 */

char *_strchr(char *s, char c)
{
	int x, y;

	y = 0;

	while (s[y])
	{
		if (s[y] == c)
		{
			return (s + y);
		}
	}
	return (0);
}
