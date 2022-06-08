#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	long double num1 = 0;
	long double num2 = 1;
	long double sum = 0;
	int n = 0;

	while (n < 97)
	{
		sum = num1 + num2;
		printf("%ld, ", sum);
		num1 = num2;
		num2 = sum;
		n++;
	}
	sum = num1 + num2;
	printf("%ld\n", sum);
	return (0);
}
