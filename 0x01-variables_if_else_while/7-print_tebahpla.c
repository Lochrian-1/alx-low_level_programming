#include <stdio.h>
 /**
  * main - prints lowercase letters of the alphabet
  *
  * Description: prints lowercase letters of the alphabet
  * in reverse
  *
  * Return: 0 when successful
  */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
