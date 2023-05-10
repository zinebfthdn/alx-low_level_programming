#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - caree d’un nbr
 * @n: numero
 *
 * Return: resultat
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurseer pour enchainer la nature
 * square root of the num
 * @n: number
 * @i: iterator
 *
 * Return: resultat
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (actual_sqrt_recursion(n, i + 1));
}
