#include "main.h"

/**
 * read_textfile - a fn that reads a text file and prints it to std out
 * @filename: a pointer to the file to read
 * @letters: numbers of letters to be printed.
 *
 * Return: numbers of letters printed. otherwise, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wrt;
	char *buff;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	rd = read(file, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	close(file);

	free(buff);

	return (wrt);
}
