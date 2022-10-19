#include "main.h"

/**
 * print_number - Prints integer number
 * Description: function that prints an intreger
 * @args: number to be printed
 * Return: Integer number
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

/**
 * print_unsigned_number - print a number that is unsigned
 * Description: print number sub
 * @n: number
 * Return: number to print
 */

int print_unsigned_number(unsigned int n)
{
	int divisor = 1;
	int length = 0;
	unsigned int number = n;

	for (; number / divisor > 9)
		divisor *= 10;
	for (; divisor != 0;)
	{
		length += _putchar('0' + number / divisor);
		number %= divisor;
		divisor /= 10;
	}

	return (length);
}
