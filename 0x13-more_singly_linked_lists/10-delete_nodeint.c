#include "lists.h"

/**
 * delete_nodeint_at_index - supprimer un noeud
 * @head: a pointer
 * @index: index
 *
 * Return: 1 if true, -1 if false
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = *head;
	listint_t *now = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		i++;
	}


	now = tp->next;
	tp->next = now->next;
	free(now);

	return (1);
}
