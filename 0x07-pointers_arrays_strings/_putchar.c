#include "main.h"
#include <unistd.h>
/**
 * _putchar - printss the char c to stdout
 * @c: The char to print
 *
 * Return: 1 Success.
 * On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
