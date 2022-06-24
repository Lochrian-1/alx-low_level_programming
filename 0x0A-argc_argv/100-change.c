#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: n args
 * @argv: arr args
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int val, a;

	a = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (val % 25 >= 0)
	{
		a += val / 25;
		val = val % 25;
	}
	if (val % 10 >= 0)
	{
		a += val / 10;
		val = val % 10;
	}
	if (val % 5 >= 0)
	{
		a += val / 5;
		val = val % 5;
	}
	if (val % 2 >= 0)
	{
		a += val / 2;
		val = val % 2;
	}
	if (val % 1 >= 0)
	{
		a += val / 1;
	}
	printf("%d\n", a);
	return (0);
}
