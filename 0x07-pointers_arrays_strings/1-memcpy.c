#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to  copy to
 *@src: Source of data to be copied
 *@n: number of bytes of memory to copy
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i); /* this add 1 position dest and src*/
		i++;

	}


	return (dest);
}
