#include "lists.h"

/**
 * get_nodeint_at_index - retourner vers un tel index
 * @head: first noeud
 * @index: index
 *
 * Return: NULL if false, pointer if true
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tp = head;

	while (tp && j < index)
	{
		tp = tp->next;
		j++;
	}

	return (tp ? tp : NULL);
}
