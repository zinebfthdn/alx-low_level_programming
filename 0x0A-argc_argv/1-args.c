#include "main.h"
#include <stdio.h>
/**
 * main - ecrire le nombre des argum.
 * @argc: le nombre des argum.
 * @argv: array des argum.
 *
 * Return: 0 Successfully
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
