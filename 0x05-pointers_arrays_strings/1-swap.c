#include "main.h"
/**
 * swap_int - swaps two int values
 * @a: params
 * @b: params
 */

void swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}
