#include "main.h"
/**
 * _puts - prints un string
 * @str: string a ecrire
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
