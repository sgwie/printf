#include "main.h"

/**
 *print_number - Prints integer number
 *
 *@n: number to be printed
 *
 *Return:void
 */

int print_number(va_list args)
{
  int n;
  unsigned int a;
  n = va_arg(args, int);
if (n < 0)
{
_putchar(45);
a = -n;
}
if (a / 10)
print_number(a / 10);
_putchar((a % 10) + '0');
 return (a);
}
