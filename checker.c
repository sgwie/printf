#include "main.h"

int checker(const char *format, conver_t func_list[], va_list arg_list)
{
  int i, j, find, printchar;

  printchar = 0;
  for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
    {
      if (format[i] == '%') /*Checks for format specifiers*/
	{
	  /*Iterates through struct to find the right func*/
	  for (j = 0; func_list[j].sym != NULL; j++)
	    {
	      if (format[i + 1] == func_list[j].sym[0])
		{
		  find = func_list[j].f(arg_list);
		  if (find == -1)
		    return (-1);
		  printchar += find;
		  break;
		}
	    }
	  if (func_list[j].sym == NULL && format[i + 1] != ' ')
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
	  i = i + 1; /*Updating i to skip format symbols*/
	}
      else
	{
	  _putchar(format[i]); /*call the putchar function*/
	  printchar++;
	}
    }
  return (printchar);
}