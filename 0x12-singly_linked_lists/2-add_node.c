#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - ajouter un noeuds
 * @head: un autre pointeur
 * @str: string
 *
 * Return: adress si vrai, contraire si faux
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveau;
	unsigned int length = 0;

	while (str[length])
		length++;

	nouveau  = malloc(sizeof(list_t));
	if (!nouveau)
		return (NULL);

	nouveau->str = strdup(str);
	nouveau->len = length;
	nouveau->next = (*head);
	(*head) = nouveau;

	return (*head);
}
