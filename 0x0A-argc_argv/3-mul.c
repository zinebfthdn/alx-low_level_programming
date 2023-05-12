#include <stdio.h>
#include "main.h"
/**
 * _atoi - convertir une string a an integer
 * @s: string
 *
 * Return: convertissement de ce string
 */
int _atoi(char *s)
{
int i, d, n, length, f, dg;
i = 0;
d = 0;
n = 0;
length= 0;
f = 0;
dg = 0;
while (s[length] != '\0')
{
length++;
}
while (i < length && f == 0)
{
if (s[i] == '-')
{
++d;
}
if (s[i] >= '0' && s[i] <= '9')
{
dg = s[i] - '0';
if (d % 2)
{
dg= -dg;
}
n = n * 10 + dg;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
f = 0;
}
i++;
}
if (f == 0)
{
return (0);
}
return (n);
}
/**
 * main - multiplier deux nbr
 * @argc: le nombre des argum.
 * @argv: array 
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
