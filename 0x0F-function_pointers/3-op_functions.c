#include "3-calc.h"
int op_add(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
/**
 * op_add - Returning to the sum of 2 numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The sum 2 num.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns the difference of 2numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The difference.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Returns the product of 2numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The product.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returns the division of 2numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The quotient.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Return the remainder of the division of 2numbers.
 * @a: 1st number.
 * @b: 2nd number.
 *
 * Return: The division.
 */
int op_mod(int a, int b)
{
return (a % b);
}
