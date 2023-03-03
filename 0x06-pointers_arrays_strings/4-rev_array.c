#include "main.h"
/**
 * reverse_array - reverses  an array n elements/ integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
int *start_c, *end_c, c;
int k;


start_c = a;
end_c = a;

for (k = 0; k < n - 1; k = k + 1)
{
end_c++;
}

for (i = 0; i < n / 2; i++)
{

c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}

}
