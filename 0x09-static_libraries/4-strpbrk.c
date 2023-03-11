#include "main.h"
/**
 * _strpbrk - a fn that search/match any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (*s == accept[x])
			{
				return (s);
			}

			x++;
		}

		s++;
	}
	return (0);

}
