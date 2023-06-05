#include "lists.h"

/**
 * free_listint - liberer une liste
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp= head->next;
		free(head);
		head = tp;
	}
}
