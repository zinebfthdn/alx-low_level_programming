#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- Lire.
 * @filename: Nom
 * @letters: Nbr de lettres
 * Return: num si vrai, 0 si faux
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pop;
	ssize_t od;
	ssize_t num;
	ssize_t ot;

	od = open(filename, O_RDONLY);
	if (od == -1)
{
		return (0);
	}
	pop = malloc(sizeof(char) * letters);
	ot = read(od, pop, letters);
	num = numrite(STDOUT_FILENO, pop, ot);
	free(pop);
	close(od);
	return (num);
}
