#include "lists.h"

/**
 * sum_listint - la somme
 * @head: first noeud
 *
 * Return: la somme
 */
int sum_listint(listint_t *head)
{
	int somme = 0;
	listint_t *tp = head;

	while (tp)
	{
		somme += tp->n;
		tp = tp->next;
	}

	return (somme);
}
