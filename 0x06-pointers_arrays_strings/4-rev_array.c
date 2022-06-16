#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, half;

	i = 0;
	half = n / 2;
	while (half > 0)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];

		half--;
		i++;
	}

}
