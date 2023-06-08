#include "main.h"

/**
 * clear_bit - clear a bit
 * @n: pointeur n
 * @index: index
 *
 * Return: -1 si faux, 1 si vrai
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
