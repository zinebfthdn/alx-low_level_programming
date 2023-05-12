#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * check_num - check - check strings
 * @str: array str
 *
 * Return: 0 Success
 */
int check_num(char *str)
{
/*Declaring variables*/
unsigned int countt;
countt = 0;
while (countt  < strlen(str)) /*countt string*/
{
if (!isdigit(str[countt])) /*check if str there are digit*/
{
return (0);
}
countt ++;
}
return (1);
}
/**
 * main - begin the code
 * @argc: Calculer les argum.
 * @argv: Argum.
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
int countt;
str_to_int;
int somme= 0;
countt = 1;
while (countt  < argc) /*Goes through the whole array*/
{
if (check_num(argv[countt ]))
{
str_to_int = atoi(argv[countt]); /*ATOI --> convert string to int*/
somme += str_to_int;
}
/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}
countt ++;
}
printf("%d\n", somme); /*print somme*/
return (0);
}
