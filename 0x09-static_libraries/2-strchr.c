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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
