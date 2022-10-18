#include "main.h"

/**
 * print_char - Prints a character
 * Description: takes input to print a chracter
 * @list: List of arguments
 * Return: Character to be printed
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_percent - Prints percent symbol
 * Description: function to print percent symbol
 * @list: List of arguments
 * Return: Percent symbol
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_string - Prints a string
 * Description: function to print a string
 * @list: Lisy of arguments
 * Return: Printed string
 */

int print_string(va_list list)
{
	int i;
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar (string[i]);
	}
	return (i);
}

/**
 * print_integer - Prints integer number
 * Description: function to print integer
 * @list: List of arguments
 * Return: Number
 */

	int print_integer(va_list list)
	{
		int n;

		n = print_number(list);

		return (n);
}
