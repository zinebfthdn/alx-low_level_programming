#include <stdlib.h>
#include "lists.h"

/**
 * list_len - nbr des elemenets dans une liste
 * @h: un pointeur
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t lol = 0;

	while (h)
	{
		lol++;
		h = h->next;
	}
	return (lol);
}
