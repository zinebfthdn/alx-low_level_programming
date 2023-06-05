#include "lists.h"

/**
 * pop_listint - supprimer le debut dun tel noeud
 * @head: a pointer 
 *
 * Return: 0 if empty, else if true
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int pop;

	if (!head || !*head)
		return (0);

	pop= (*head)->n;
	tp= (*head)->next;
	free(*head);
	*head = tp;

	return (pop);
}
