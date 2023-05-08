#include "main.h"
/**
 *_memcpy - a fonction qui  copie memoire
 *@dest: memory stored
 *@src: memory copied
 *@n: num of bytes
 *
 *Return: copier la memoire lors de changement de n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
