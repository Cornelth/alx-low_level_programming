#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @s: input string.
 * Return: dest
 */

char *leet(char *s)
{
int count = 0, i;
int small_case[] = {97, 101, 111, 116, 108};
int capital_case[] = {65, 69, 79, 84, 76};
int num[] = {52, 51, 48, 55, 49};


while (*(s + count) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(s + count) == small_case[i] || *(s + count) == capital_case[i])
{
*(s + count) = num[i];
break;
}
}
count++;
}

return (s);
}
