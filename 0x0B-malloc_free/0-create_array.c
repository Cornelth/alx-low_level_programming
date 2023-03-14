#include "main.h"
/**
 *create_array - a function to create an array of char
 *@size: number elements array
 *@c: char
 *Return: pointer if success, 0 if fails
 */

char *create_array(unsigned int size, char c)
{
char *dynmemo;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*initializing and defining a dynmem*/
dynmemo = (char *) malloc(size * sizeof(c));

if (dynmemo == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size) /*While for array*/
{
*(dynmemo + position) = c;
position++;
}

return (dynmemo);
}

}
