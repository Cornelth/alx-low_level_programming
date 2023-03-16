#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 *malloc_checked - creating an array using malloc for string printing
 *@b: number of memory to be created
 *Return: void/nothing
 */

void *malloc_checked(unsigned int b)
{
void *task0;

task0 = malloc(b);
if (task0 == NULL)
{
exit(98);
}

return (task0);
}
