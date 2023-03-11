#include "main.h"
/**
 * _strspn - Function that get the length of a character in a string
 * @s: the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int x, y;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	x = 0;
	while (str1[x] != '\0')
	{
		y = 0;
		while (str2[y] != '\0')
		{
			if (str2[y] == str1[x])
			{
				count++;
				break;
			}

			y++;
		}

		if (s[x] != accept[y])
		{
			break;
		}

		x++;
	}

	return (count);
}
