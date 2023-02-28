#include "main.h"
/**
 * _strlen - string lenght
 * @s: params
 * Return: int
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght = lenght + 1;
	}

	return (lenght);
}
