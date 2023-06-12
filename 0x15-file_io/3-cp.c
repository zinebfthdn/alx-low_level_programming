#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *creer_un_buffer(char *fichier);
void fermer_un_fichier(int odd);

/**
 * creer_un_buffer - creer un buffer.
 * @fichier: nom fichier.
 *
 * Return: pointeur.
 */
char *creer_un_buffer(char *fichier)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fichier);
		exit(99);
	}

	return (buffer);
}

/**
 * fermer_un_fichier - fermer un fichier.
 * @odd: fichier.
 */
void fermer_un_fichier(int odd)
{
	int co;

	co = close(odd);

	if (co == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close odd %d\n", odd);
		exit(100);
	}
}

/**
 * main - copier.
 * @argc: nbr d’argument.
 * @argv: array.
 *
 * Return: 0 si vrai.
 *
 * Description: ca depds de l’argument, si cest vrai ou faux.
 */
int main(int argc, char *argv[])
{
	int de, to, r, num;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fichier_from fichier_to\n");
		exit(97);
	}

	buffer = creer_un_buffer(argv[2]);
	de = open(argv[1], O_RDONLY);
	r = read(de, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (de == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read de fichier %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		num = write(to, buffer, r);
		if (to == -1 || num == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(de, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	fermer_un_fichier(de);
	fermer_un_fichier(to);

	return (0);
}
