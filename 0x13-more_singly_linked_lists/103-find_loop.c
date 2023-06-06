#include "lists.h"

/**
 * find_listint_loop - trouver
 * @head: header of a list
 *
 * Return: renvoie une liste si vrai, 0 si faux
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *fs = head;

	if (!head)
		return (NULL);

	while (sl && fs && fs->next)
	{
		fs = fs->next->next;
		sl = sl->next;
		if (fs == sl)
		{
			sl = head;
			while (sl != fs)
			{
				sl = sl->next;
				fs = fs->next;
			}
			return (fs);
		}
	}

	return (NULL);
}
