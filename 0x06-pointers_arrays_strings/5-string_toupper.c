#include "main.h"

/**
 * *string_toupper - capitalizes a string
 * @str: is a pointer to a string
 *
 * Return: void
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		str[i] -= 32;

		i++;
	}
	return (str);
}
