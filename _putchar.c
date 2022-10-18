#include "main.h"

/**
 * _putchar - produces output to stdout
 * Description: returns nuber of charactes
 * @c: input strings to print
 * Return: characters to print to stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
