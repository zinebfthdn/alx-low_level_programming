#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Printing the strings, apres a new line.
 * @separator: string to be printed between strs.
 * @n: numof strings passed to the fct.
 * @...: var number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;
va_start(strings, n);
for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (index != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(strings);
}

