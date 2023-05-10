#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - see if its palindrome or nah
 * @s: string
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - longueur d’un sring
 * @s: string
 *
 * Return: longueur
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - see the char if palindrome
 * @s: string
 * @i: iterator
 * @len: longueur
 *
 * Return: 1 if true, 0 if false
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
{
return (0);
}
if (i >= len)
{
return (1);
}
return (check_pal(s, i + 1, len - 1));
}
