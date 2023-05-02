#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i, d, n, length, f, r;
i = 0;
d = 0;
n = 0;
length = 0;
f = 0;
r = 0;
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
r = s[i] - '0';
if (d % 2)
{
r = -r;
}			
n = n * 10 + r;
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
