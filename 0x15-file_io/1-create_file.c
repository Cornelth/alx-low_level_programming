#include "main.h"

/**
 * create_file - A fn that Creates a file.
 * @filename: A pointer to the file name to be created
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on success, If fails return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
