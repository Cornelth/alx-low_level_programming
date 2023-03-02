#include "main.h"
/**
 *_strcat - prototype to concatenates two strings (src to dest)
 *@dest: A pointer to the first character
 *@src: A pointer to the 2nd character
 *Return: dest (resulting string)
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}
