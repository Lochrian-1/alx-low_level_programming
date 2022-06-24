#include "main.h"

/**
 * * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes in memory area to fill
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
