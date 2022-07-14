#include "lists.h"

/**
 * print_list - prints elements of a list_t
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;

		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (s);
}
