#include "main.h"
/**
 *   _isupper - this function checks for uppercase
 * @c: the alphabeth/parameter to check
 * Return: zero for success
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
