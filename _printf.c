#include "main.h"
int _printf(const char *format, ...)
{
int printchar;
prints_t func_list[] = {
		     {"c", print_char},
		     {"s", print_string},
		     {"%", Print_percent},
		     {NULL, NULL},
};
va_list arg_list;

if (format == NULL)
  return (-1);

va_start (arg_list, format);

printchar = checker (format,func_list, arg_list);
va_end(arg_list);
return(printchar);
}
