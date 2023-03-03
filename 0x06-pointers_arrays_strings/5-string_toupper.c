#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to uppercase letters
 * @str: string
 * Return: returns char
 */


char *string_toupper(char *str)
{
int k;

for (k = 0; str[k] != '\0'; k = k + 1)
{
if (str[k] >= 'a' && str[k] <= 'z')
{
str[k] = str[k] - 32;
}
}

return (str);
}
