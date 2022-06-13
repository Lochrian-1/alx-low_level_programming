#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is pointer 1
 * @b: is pointer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int z = *a;

	*a = *b;
	*b = z;
}
