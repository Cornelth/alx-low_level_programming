#include "main.h"
/**
 *_strncat - 2nd task to concatenates two strings
 *@dest: A pointer to the string to append to
 *@src: A pointer to the string/char that will be append to another
 *@n: an integer value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (b < n && src[j] != '\0')
{
dest[a] = src[b];
b++;
a++;
}

dest[a] = '\0';

return (dest);
}
