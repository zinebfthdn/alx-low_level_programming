#include "lists.h"
#include <stdlib.h>
/**
 * free_list - liberer
 * @head: pointeur
 */
void free_list(list_t *head)
{
list_t *point;
while (head)
{
point= head->next;
free(head->str);
free(head);
head = point;
}
}
