#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - calculer
 * @head: pointeur
 *
 * Return: 0 si vrai, 1 si faux
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *ha;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	ha = (head->next)->next;

	while (ha)
	{
		if (tor == ha)
		{
			tor = head;
			while (tor != ha)
			{
				nodes++;
				tor = tor->next;
				ha = ha->next;
			}

			tor = tor->next;
			while (tor != ha)
			{
				nodes++;
				tor = tor->next;
			}

			return (nodes);
		}

		tor = tor->next;
		ha = (ha->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - ecrire
 * @head: a pointeer
 *
 * Return: nbr d noeuds.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
