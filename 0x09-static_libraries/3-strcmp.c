#include "main.h"
/**
 *_strcmp - function to compare two strings using pointer
 *@s1: A pointer to a character that will be compared
 *@s2: A pointer to a character that will also be compared and ...
 *updated with difference
 *Return: dest
 */

int _strcmp(char *s1, char *s2)

{

char *str_1 = s1;
char *str_2 = s2;


while (*str_1 != '\0' && *str_2 != '\0' && *str_1 == *str_2)
{
str_1++;
str_2++;
}

return (*str_1 - *str_2);
}
