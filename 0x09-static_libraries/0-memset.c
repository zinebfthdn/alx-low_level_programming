#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: adresse
 * @b: valeur choisie
 * @n: number of bytes
 *
 * Return: changr les arrayen n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
