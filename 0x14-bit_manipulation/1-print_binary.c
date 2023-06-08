#include "main.h"

/**
 * print_binary - ecrire le nmbr binaire
 * @n: num n
 */
void print_binary(unsigned long int n)
{
	int i, lol = 0;
	unsigned long int now;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;

		if (now & 1)
		{
			_putchar('1');
			lol++;
		}
		else if (lol)
			_putchar('0');
	}
	if (!lol)
		_putchar('0');
}
