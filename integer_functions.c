#include "main.h"

/**
 *print_number - Prints integer number
 *
 *@n: number to be printed
 *
 *Return: Integer number
 */

int print_number(va_list args)
{
  int n;
  int divisor;
  int length;
  unsigned int number;

  n  = va_arg(args, int);
  divisor = 1;
  length = 0;

  if (n < 0)
    {
      length += _putchar('-');
      number = n * -1;
    }
  else
    number = n;

  for (; number / divisor > 9; )
    divisor *= 10;

  for (; divisor != 0; )
    {
      length += _putchar('0' + number / divisor);
      number %= divisor;
      divisor /= 10;
    }

  return (length);
}
