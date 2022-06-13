#include "main.h"

/**
 * rev_string - prints a reversed string
 * @s: is a pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;

	char 1st, last;

	i = 0;

	while (s[i])
	{
		i++;
	}
	max = i - 1;
	half = max / 2;

	while (half >= 0)
	{
		1st = s[max - half];
		last = s[half];
		s[half] = 1st;
		s[max - half] = last;
		half--;
	}
}
