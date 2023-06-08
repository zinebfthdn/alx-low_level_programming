#include "main.h"

/**
 * get_bit - get bit
 * @n: num n
 * @index: index
 *
 * Return: valeur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
