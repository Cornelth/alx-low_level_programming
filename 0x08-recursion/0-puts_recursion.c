#include "main.h"
/**
 *_puts_recursion - function that prints a string followed by a new line
 *@s: pointer block of memory to fill
 *Return: 0
 */

void _puts_recursion(char *s)

{
  if (*s == '\0') //excluding null char
{
_putchar('\n');
return;
}

_putchar (*s);
_puts_recursion(s + 1);

}
