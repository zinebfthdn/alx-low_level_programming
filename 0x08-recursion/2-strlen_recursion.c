#include "main.h"
/**
 * _strlen_recursion - longueur d’une string.
 * @s: string.
 *
 * Return: longueur.
 */
int _strlen_recursion(char *s)
{
int longueur = 0;
if (*s)
{
longueur++;
longueur += _strlen_recursion(s + 1);
}
return (longueur);
}
