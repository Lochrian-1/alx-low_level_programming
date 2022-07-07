#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - performs simple operations (calculator)
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int x, y, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	result = op(x, y)

	printf("%d\n", result);
	return (0);
}
