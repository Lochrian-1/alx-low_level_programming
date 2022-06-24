#include "main.h"

/**
 * * _memcpy - copy memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 *
 * Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
