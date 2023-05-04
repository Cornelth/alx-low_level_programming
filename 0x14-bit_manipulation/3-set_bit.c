#include "main.h"

/**
 * set_bit - A fn that Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit to be set.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: -1 for error, 1 Otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
