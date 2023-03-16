#include "main.h"
/**
 *malloc_checked - creating an array using malloc for string printing
 *@b: number of memory to be created
 *Return: void/nothing
 */

void *malloc_checked(unsigned int b)
{
void *task_0;

task_0 = malloc(b);
if (task_0 == NULL)
{
exit(98);
}

return (task_0);
}
