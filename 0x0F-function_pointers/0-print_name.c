#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - printing names using pointer to a function
 * @name: string to adds
 * @f: pointing to a certain  function
 * Return: rien
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
