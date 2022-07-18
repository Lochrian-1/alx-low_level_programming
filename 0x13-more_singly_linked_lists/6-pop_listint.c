#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 * @head: head of linked list
 *
 * Return: node data (integer)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	temp = *head;
	if (*head == NULL)
	{
		return (n);
	}
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
