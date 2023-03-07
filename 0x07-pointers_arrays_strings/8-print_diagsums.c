#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this prints sum of two diagonals of a square matrix
 * of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: 0
 */
void print_diagsums(int *a, int size)
{
	/*Declaring variables*/
	int x;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	x = 0;
	while (x < size)
	{
		sum1 = sum1 + *(a + x * size + x);
		sum2 = sum2 + *(a + x * size + size - x - 1);

		x++;
	}

	printf("%i, %i\n", sum1, sum2);

}
