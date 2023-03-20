#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
/*The name of FILE file is printed*/
printf("%s\n", __FILE__);
return (0);
}
