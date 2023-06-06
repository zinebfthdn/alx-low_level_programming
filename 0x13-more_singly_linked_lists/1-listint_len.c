#include "lists.h"

/**
 * listint_len - nbr d elements
 * @h: h
 *
 * Return: nbr d noeuds
 */
size_t listint_len(const listint_t *h)
{
	size_t muun = 0;

	while (h)
	{
		muun++;
		h = h->next;
	}

	return (muun);
}
