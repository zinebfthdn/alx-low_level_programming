#include "lists.h"
/**
 * print_listint - ecrire les elements
 * @h: h
 *
 * Return: nbr d noeuds
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
