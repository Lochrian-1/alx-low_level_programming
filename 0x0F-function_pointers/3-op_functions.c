#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

int op_add(int a, int b)
{
		return (a + b);
}

/**
 * op_sub - difference between two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

int op_sub(int a, int b)
{
		return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

int op_mul(int a, int b)
{
		return (a * b);
}

/**
 * op_div - quotient of two numbers
 * @a: first integer (dividend)
 * @b: second integer (divisor)
 *
 * Return: void
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo (remainder)
 * @a: first integer (dividend)
 * @b: second integer (divisor)
 *
 * Return: void
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
