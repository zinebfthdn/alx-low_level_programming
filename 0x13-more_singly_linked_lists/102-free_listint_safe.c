#include "lists.h"

/**
 * free_listint_safe - liberer
 * @h: pointer
 *
 * Return: num des elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *tp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
