#include "main.h"
/**
 *_islower - check if a char is a lowercase
 *@c: is the parameter to be checked
 *Return: 1 if char is a lowercase, otherwise it returns 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
