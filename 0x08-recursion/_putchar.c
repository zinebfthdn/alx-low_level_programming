#include <unistd.h>
#include "main.h"
/**
 * _putchar - print char c to stdout
 * @c: char a ecrire
 *
 * Return: 1 success.
 * On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
