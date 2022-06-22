#include "main.h"
#include <stdio.h>

/**
 * check_prime - check all numbers < n if they can divide it
 * @n: integer
 * @resp: integer
 *
 * Return: void
 */

int check_prime(int n, int resp)
{

	if (resp >= n && n > 1)
	{
		return (1);
	}
	else if (n % resp == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, resp + 1));
	}
}

/**
 * is_prime_number - check if n is a prime number
 * @n: integer
 *
 * Return: 0 when successful
 */


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
