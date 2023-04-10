#include "main.h"

/**
 * get_endianness - a fn that Checks the endianness.
 *
 * Return: 0 for big-endian; 1 for little-endian - 1.
 */
int get_endianness(void)
{
	int numb = 1;
	char *endian = (char *)&numb;

	if (*endian == 1)
		return (1);

	return (0);
}
