#include "main.h"

/**
 * flip_bits - calculer les bits
 * @n: 1er nombre n
 * @m: 2eme nombre m
 *
 * Return: num des bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, lol = 0;
	unsigned long int now;
	unsigned long int ala = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		now = ala >> i;
		if (now & 1)
			lol++;
	}

	return (lol);
}
