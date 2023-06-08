#include "main.h"

/**
 * get_endianness -  get endianness
 * Return: 1 pour petit, 0 pour grand
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *p = (char *) &q;

	return (*p);
}
