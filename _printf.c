#include "main.h"

/**
 * _printf - prints output according to a certain format
 * Description: does not print the final null byte
 * @format: format in which to print
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int printchar;
	prints_t func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{NULL, NULL},
	};
	va_list arg_list;

	if (format == NULL)
	return (-1);

	va_start(arg_list, format);

	printchar = checker(format, func_list, arg_list);
	va_end(arg_list);

	return (printchar);
}
