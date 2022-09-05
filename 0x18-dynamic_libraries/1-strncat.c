#include "main.h"

/**
 * * _strncat - concatenates two strings
 * @dest: is a pointer to the destination
 * @src: is a pointer to the source
 * @n: number of bytes to be appended
 *
 * Return: The pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len])
	{
		len++;
	}

	i = 0;
	while (i < n && dest[i])
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);

}
