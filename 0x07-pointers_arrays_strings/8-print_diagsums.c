#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)

{
	int b = 0, sum1 = 0, sum2 = 0;

	while (b < size)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];

		b++;
	}
	printf("%d, %d\n", sum1, sum2);
}
