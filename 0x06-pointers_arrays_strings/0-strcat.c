#include "main.h"

/**
 *  *_strcat - appends the src string to the dest string
 *  @src: is a pointer to source
 *  @dest: a pointer at destination
 *
 *  Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = -1;

	while (dest[a] != '\0')
		a++;

	do {
		b++;
		dest[a] = src[b];
		a++;
	} while (src[b] != '\0');

	return (dest);
}
