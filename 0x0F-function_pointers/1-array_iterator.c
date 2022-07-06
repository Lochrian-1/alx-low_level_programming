#include "function_pointers.h"

/**
 * array_iterator - executes funct
 * @array: array of elements
 * @size: array's size
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size && action)
	{
		x = 0;
		while (x < size)
		{
			(*action)(array[x]);
			x++;
		}
	}
}
