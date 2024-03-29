#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - A fn that Searches for an integer in an array of integers.
 * @array: The array of integers to serch within.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: -1, If no element matches or size <= 0
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (size > 0 && cmp && size && array)
	
		for (b = 0; b <= size; b++)
		{
			if (cmp(array[b]))
				return (b);
		}

	return (-1);
}
