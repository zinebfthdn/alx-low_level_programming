#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selectionner lopperation juste saisie par lutilisateur
 * @s: The operator.
 *
 * Return: A pointer to the fct to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int i = 0;
while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}
return (ops[i].f);
}
