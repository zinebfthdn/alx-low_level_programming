#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - ajouter un noeud a la fin
 * @str: string
 * @head: autre pointeur
 *
 * Return:adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nv;
list_t *point = *head;
unsigned int length = 0;
while (str[length])
{
length++;
}
nv= malloc(sizeof(list_t));
if (!nv)
{
return (NULL);
}
nv->str = strdup(str);
nv->len = length;
nv->next = NULL;
if (*head == NULL)
{
*head = nv;
return (nv);
}
while (point->next)
{
point= point->next;
}
point->next = nv;
return (nv);
}
