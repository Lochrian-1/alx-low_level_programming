#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long int num1 = 0;
	unsigned long int num2 = 1;
	unsigned long int sum = 0;
	int n = 0;

	while (n < 97)
	{
		sum = num1 + num2;
		printf(sum + ", ");
		num1 = num2;
		num2 = sum;
		n++;
	}
	sum = num1 + num2;
	printf(sum + '\n');
	return (0);
}
