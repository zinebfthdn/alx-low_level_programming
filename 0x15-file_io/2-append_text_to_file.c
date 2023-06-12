#include "main.h"

/**
 * append_text_to_file - Apprendre.
 * @filename:  pointeur
 * @text_content: string.
 *
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, num, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	num = write(o, text_content, length);

	if (op == -1 || num == -1)
		return (-1);

	close(op);

	return (1);
}
