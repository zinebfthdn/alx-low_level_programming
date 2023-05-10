#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - lire si le nombre est un nbr primaire ou pas
 * @n: nombre
 *
 * Return: 1 si vrai, 0 si faux
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculer si le nbr est primaire
 * @n: nombre
 * @i: iterator
 *
 * Return: 1 si vrai, 0 si faux
 */
int actual_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (actual_prime(n, i - 1));
}
