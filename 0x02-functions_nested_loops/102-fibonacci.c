#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	int num1, num2, sum, n;

	num1 = 0;
	num2 = 1;
	sum = 0;
	n = 0;
	while (n < 49)
	{
		sum = num1 + num2;
		printf("%d, ", sum);
		num1 = num2;
		num2 = sum;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
