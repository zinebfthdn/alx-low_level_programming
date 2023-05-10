#include "main.h"
/**
 * factorial - factoriel d’un certain nombre
 * @n: numero qu’on souhaite avoir son factoriel
 *
 * Return: factoriel de n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
