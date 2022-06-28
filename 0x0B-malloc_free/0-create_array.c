#include "main.h"
#include <stdlib.h>

/**
 * create_array - writes the character c to stdout
 * @size: The character to print
 * @c: The character to print
 *
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(char) * size);

	if (m == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			m[i] = c;
			i++;
		}
	}
	return (m);
}
