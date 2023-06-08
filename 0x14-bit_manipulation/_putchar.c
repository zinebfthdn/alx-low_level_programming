#include <unistd.h>
#include "main.h"
/**
 * _putchar - ecrire
 * @c: char c
 *
 * Return: -1 si faux, 0 si vrai
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
