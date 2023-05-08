#include "main.h"

/**
 * append_text_to_file - A fn Appends text to (i.e. at the end of) a file.
 * @filename: A pointer to the file name.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 for failure or empty file or non-existing file; Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
