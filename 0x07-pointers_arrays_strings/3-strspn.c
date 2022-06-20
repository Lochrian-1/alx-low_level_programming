#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: accepted string
 *
 * Returnn: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	a = 0;
	b = 0;
	c = 0;

	while (accept[a])
	{
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}
			b++;
		}
		a++;
	}
	return (c);
}
