#include "main.h"
/**
 *_memset -   fills memory with  constant byte of n amount
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory to fill
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /* this line add 1 position s*/

	}

	return (s);
}
