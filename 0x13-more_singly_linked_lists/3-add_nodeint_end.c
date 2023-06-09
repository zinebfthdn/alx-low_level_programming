#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - ajouter un noeud
 * @n: new data to insert
 * @head: a pointer
 *
 * Return: 0 if false, else if true
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nouveau;
	listint_t *tp = *head;

	nouveau = malloc(sizeof(listint_t));
	if (!nouveau)
		return (NULL);

	nouveau->n = n;
	nouveau->next = NULL;

	if (*head == NULL)
	{
		*head = nouveau;
		return (nouveau);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = nouveau;

	return (nouveau);
}
