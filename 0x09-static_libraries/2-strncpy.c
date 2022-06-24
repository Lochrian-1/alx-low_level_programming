#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the string to be copied
 * @n: number of bytes from src
 *
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
