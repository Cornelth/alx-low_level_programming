#include "main.h"
/**
 *times_table - multiplication table for 0 to 9
 *
 *
 *Return: 0
 */
void times_table(void)
{
	int i,
	int j,
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar (i * j);
		}
		_putchar ('\n');
	}
}
