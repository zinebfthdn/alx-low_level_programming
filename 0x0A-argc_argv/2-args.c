#include <stdio.h>
#include "main.h"
/**
 * main - ecrire tt les argum.
 * @argc: le nombre des argum.
 * @argv: array des argum.
 *
 * Return: 0 successfully
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
