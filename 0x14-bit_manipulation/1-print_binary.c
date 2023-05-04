1 #include "main.h"
  2 
  3 /**
  4  * print_binary -  fn that Prints the bin rep of a number.
  5  * @n: The num to be printed in binary.
  6  */
  7 void print_binary(unsigned long int n)
  8 {
  9         if (n > 1)
 10                 print_binary(n >> 1);
 11 
 12         _putchar((n & 1) + '0');
 13 }

