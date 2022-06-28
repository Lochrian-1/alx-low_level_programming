#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: void
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, z, e, count;
	int count1 = 0;
	int count2 = 0;
	char *m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++;)
	{
		count1 = count1 + 1;
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		count2 = count2 + 1;
	}
	count = count1 + count2;
	m = malloc(sizeof(char) * count + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (z = 0; s1[k] != '\0'; z++)
	{
		m[z] = s1[z];
	}
	for (z = z, e = 0; s2[e] != '\0'; e++, z++)
	{
		m[z] = s2[e];
	}
	m[z] = '\0';
	return (m);
}
