0;10;1c0;10;1c#ifndef PRINT_F
#define PRINT_F

#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>

/**
 * struct prints - struct for main things
 * @symbol: member 1
 * @func: member 2
 */

typedef struct prints
{
	char *symbol;
	int(*func)(va_list);
} prints_t;

/*Main functions*/
int checker(const char *format, prints_t func_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_string(va_list);
int print_unsigned_integer(va_list);
int print_number(va_list);
int print_unsigned_number(unsigned int n);

#endif
