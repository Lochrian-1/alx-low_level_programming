#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints all multiples for 3 and 5
 *
 * Description: computes and prints all multiples for 3 and 5 below 1024
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n, sum;

	sum = 0;
	n = 0;
	while (n <  1024)
	{
		if ((n % 3) == 0||(n % 5) == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
