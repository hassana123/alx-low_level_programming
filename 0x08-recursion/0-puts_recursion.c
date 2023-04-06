#include "main.h"

/**
 * _puts_recursion - this is a fuction that prints a string
 * using recursion
 * @s: the string to be printed out
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
