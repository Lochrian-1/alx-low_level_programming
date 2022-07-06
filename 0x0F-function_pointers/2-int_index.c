#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function
 *
 * Return: voif.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		x = 0;
		while (x < size)
		{
			if (cmp(array[x]))
			{
				return (i);
			}
			x++;
		}
	}
	return (-1);
}
