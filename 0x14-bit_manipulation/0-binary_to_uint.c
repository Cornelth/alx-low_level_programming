#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a fn that converts a bin num to an unsigned int
 * @b: string definition
 * Return: the converted decimal number;  0 for failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int size;

	if (b == NULL)
		return (0);

	for (size = 0; b[size]; size++)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
	}

	for (power = 1, sum = 0, size--; size >= 0; size--, power *= 2)
	{
		if (b[size] == '1')
			sum += power;
	}

	return (sum);
}
