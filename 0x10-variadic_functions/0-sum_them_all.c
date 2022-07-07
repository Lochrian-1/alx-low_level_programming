#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: n args
 *
 * Return: void
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		i = 0;
		while (i < n)
		{
			sum += va_arg(arguments, int);
			i++;
		}
		va_end(arguments);
	}
	return (sum);
}
