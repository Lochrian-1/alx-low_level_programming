#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: head of linked list
 * @n: integer
 *
 * Return: void
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *tmp;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = p;
	return (p);
}
