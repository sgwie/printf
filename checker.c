#include "main.h"

/**
 * checker- Checks for appropriate function to pass to printf
 * @format: Character string
 *@func_list: List of functions
 *@arg_list: List of arguments
 *Return: Printed characters
 */

int checker(const char *format, prints_t func_list[], va_list arg_list)
{
int i, j, find, printchar;

printchar = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; func_list[j].symbol != NULL; j++)
{
if (format[i + 1] == func_list[j].symbol[0])
{
find = func_list[j].func(arg_list);
if (find == -1)
return (-1);
printchar += find;
break;
}
}
if (func_list[j].symbol == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
printchar = printchar + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_putchar(format[i]);
printchar++;
}
}
return (printchar);
}
