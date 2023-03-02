#include "main.h"
/**
 *_strncpy - function to copy strings
 *@dest: A pointer to destination  character
 *@src: A pointer to copying character
 *@n: int value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int a;

a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}

while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);

}
