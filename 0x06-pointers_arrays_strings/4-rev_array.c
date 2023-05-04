#include "main.h"
/**
 * reverse_array - inverser un array de strings
 * @a: array
 * @n: numero des elements de array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
