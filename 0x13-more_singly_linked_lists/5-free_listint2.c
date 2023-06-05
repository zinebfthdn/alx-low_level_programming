#include "lists.h"
/**
 * free_listint2 - liberer une liste
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (*head)
	{
		tp= (*head)->next;
		free(*head);
		*head = tp;
	}

	*head = NULL;
}
