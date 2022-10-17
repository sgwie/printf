#include "main.h"

int print_char(va_list list)
{
  _putchar(va_arg(list,int));
  return (1);
}

int print_percent(__attributr__((unused))va_list list)
{
  _putchar('%');
  return (1);
}

int print_string (va_list list)
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
