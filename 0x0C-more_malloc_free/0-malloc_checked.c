#include "main.h"
#include <stdio.h>
/**
 *malloc_checked - creating an array using malloc for string printing
 *@b: number of memory to be created
 *Return: void/nothing
 */

void *malloc_checked(unsigned int b)
{
void *task;

task = malloc(b);
if (task == NULL)
{
exit(98);
}

return (task);
}
