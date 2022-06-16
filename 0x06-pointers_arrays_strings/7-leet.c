#include "main.h"

/**
 * leet - replaces specific letters with specific numbers
 * @str: the string of letters
 *
 * Return: Pointer to the str
 */

char *leet(char *str)
{
	int i, x;

	char small[] = "aeotl";
	char big[] = "AEOTL";
	char num[] = "43071";

	i = 0;
	while (str[i])
	{
		x = 0;
		while (x < 5)
		{
			if (str[i] != small[x] && str[i] != big[x])
				continue;
			
			str[i] = num[x];
			break;

			x++;
		}
		i++;
	}
	return (str);
}
