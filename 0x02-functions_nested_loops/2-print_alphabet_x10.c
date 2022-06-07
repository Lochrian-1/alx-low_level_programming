#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Description: prints alphabet 10 times in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char lines = 0, letters;

	while (lines <= 9)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		lines++;
	}
}
