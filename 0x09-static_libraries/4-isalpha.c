#include "main.h"
/**
 * _isalpha - checker for alphabetic character
 * @c: the char to be checked
 * Return: 1 if c is a letter, 0 if c is not a letter
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
