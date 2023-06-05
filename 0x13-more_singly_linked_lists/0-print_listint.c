#include "lists.h"
/**
 * print_listint - ecrire les elements
 * @h: h
 *
 * Return: nbr d noeuds
 */
size_t print_listint(const listint_t *h)
{
	size_t mun = 0;

	while (h)
	{
		printf("%d\n", h->mun);
		mun++;
		h = h->next;
	}

	return (mun);
}

