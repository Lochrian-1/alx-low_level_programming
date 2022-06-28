#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: void
 */

char *_strdup(char *str)
{
	int len, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	arr = malloc(len * sizeof(char) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';

	return (arr);
}
