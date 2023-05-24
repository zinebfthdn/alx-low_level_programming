#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - ecrire chaque array a un autre nouveau
 * @array: an array
 * @size: num of times
 * @action: pointing to print wether its reguler or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
