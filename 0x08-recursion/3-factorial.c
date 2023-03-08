#include "main.h"
/**
 *factorial - A function that computes factorial of a particular number
 *@n: the  block of memory to fill
 *Return: factorial
 */

int factorial(int n)
{
if (n == 0)
return (1);

else if (n < 0)
return (-1);
else
return (n * factorial(n - 1)); /*Recursive call*/

}
