#ifndef PRINT_F
#define PRINT_F

#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>

typedef struct prints
{
  char *symbol;
  int(*func)(va_list);
} prints_t;

/*Main functions*/
int checker(const char *format, prints_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_percent(va_list);
int print_integer(va_list);
int print_string(va_list);

#endif
