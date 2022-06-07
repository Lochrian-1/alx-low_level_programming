#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Descriptionn: checks for lowercase characters
 *
 * Return: 1 when c is a lowercase and 0 when otherwise
 */

int _islower(void)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
