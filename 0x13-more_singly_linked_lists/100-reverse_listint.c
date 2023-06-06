#include "lists.h"

/**
 * reverse_listint - renverser la liste
 * @head: pointer
 *
 * Return: pointeeuur
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *precedent = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = precedent;
		precedent = *head;
		*head = next;
	}

	*head = precedent;

	return (*head);
}
