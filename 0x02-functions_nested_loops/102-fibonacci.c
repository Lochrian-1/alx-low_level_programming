#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	long int num1 = 0;
	long int num2 = 1;
	long int sum = 0;
	int n = 0;

	while (n < 49)
	{
		sum = num1 + num2;
		printf("%li, ", sum);
		num1 = num2;
		num2 = sum;

		n++;
	}
	sum = num1 + num2;
	printf("%li\n", sum);
	return (0);
}
