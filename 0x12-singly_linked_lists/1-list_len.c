#include "lists.h"

/**
 * list_len - returns elements in a linked list_t
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t s;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}

	return (s);
}
