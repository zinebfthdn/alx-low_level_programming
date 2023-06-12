#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointeur
 * @text_content: autre pointeur
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int odd, num, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	odd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num = write(odd, text_content, length);

	if (odd == -1 || num == -1)
		return (-1);

	close(odd);

	return (1);
}
