#include "lists.h"

/**
 * add_nodeint - ajouter un noeud
 * @n: new data to insert
 * @head: a pointer
 *
 * Return: 0 if false, else if true
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouveau;

	nouveau = malloc(sizeof(listint_t));
	if (!nouveau)
		return (NULL);

	nouveau->n = n;
	nouveau->next = *head;
	*head = nouveau;

	return (nouveau);
}
