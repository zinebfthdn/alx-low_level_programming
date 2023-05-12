#include "main.h"
/**
 * _strlen - retourner the length of a string
 * @s: string
 * Return: longueur
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
