#include "main.h"

/**
 * set_bit - set bit
 * @n: pointeur n
 * @index: index
 *
 * Return: -1 si faux, 1 si vrai
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = ((1UL << index) | *n);
return (1);
}
