#include "lists.h"

/**
 * listint_len - returns elements in a list
 * @h: head of a linked list
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		h = h->next;
	}

	return (s);
}
