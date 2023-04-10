#include "main.h"

/**
 * flip_bits - A fn that count the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: This returns appropriate # of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, b = 0;

	while (XOR > 0)
	{
		b += (XOR & 1);
		XOR >>= 1;
	}

	return (b);
}
