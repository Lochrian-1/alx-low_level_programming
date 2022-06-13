#include "main.h"

/**
 * *_strcpy - copies the string being pointed at
 * @dest: a char type string
 * @src: a char type string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
