#include "lists.h"

/**
 * print_listint - prints elements of listint_t
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t s;

	for (s = 0; h != NULL; s++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (s);
}
