#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc, and initializes to 0
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');

	p = malloc(nmemb * size);
	if (p == NULL)
		return ('\0');

	for (x = 0; x < nmemb * size; x++)
		p{x] = 0;
	return ((void *)p);
}
