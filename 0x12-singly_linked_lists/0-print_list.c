#include “lists.h”
#include <stdio.h>
/**
 * print_list - ecrire une liste
 * @h: un pointeur
 *
 * Return: numero de noeuds
 */
size_t print_list(const list_t *h)
{
size_t lol = 0;
while (h)
{
if (!h->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u]%s\n", h->len, h->str);
}
h = h->next;
lol++;
}
return (lol);
}
