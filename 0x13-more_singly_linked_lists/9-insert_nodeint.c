#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: a pointer
 * @idx: index
 * @n: data
 *
 * Return: pointer if true, NULL if false
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *nouveau;
	listint_t *tp = *head;

	nouveau= malloc(sizeof(listint_t));
	if (!nouveau || !head)
		return (NULL);

	nouveau->n = n;
	nouveau->next = NULL;

	if (idx == 0)
	{
		nouveau->next = *head;
		*head = nouveau;
		return (nouveau);
	}

	for (j = 0; tp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			nouveau->next = tp->next;
			tp->next = nouveau;
			return (nouveau);
		}
		else
			tp = temp->next;
	}

	return (NULL);
}
