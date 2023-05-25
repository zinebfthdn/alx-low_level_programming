#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints num, apres a new line.
 * @separator: string to be printed between num.
 * @n: num of integers passed to the fct.
 * @...: var num of nums to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;
va_start(nums, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));
if (index != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(nums);
}
