#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (n >= 0)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
		n--;
		i++;
	}
	printf("\n");
}
