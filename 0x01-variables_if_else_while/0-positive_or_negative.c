#include <stdlib.h>
#include <time.h>

/**
 * main: to determine whether number is positive or negative
 *
 * Description: This program will assign a random number to the variable n each time
 * it is executed and determine whether it is positive or negative
 *
 * Return: Will return 0 when successful
 */

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n = 0)
		printf("%d is zero\n", n)
	else if (n < 0)
		printf("%d is negative\n", n)
	else
		printf("%d is positive\n", n)

	return (0);
}
