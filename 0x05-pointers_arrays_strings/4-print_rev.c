#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int longstr = 0;
	int i;

	while (*s != '\0')
	{
		longstr++;
		s++;
	}
	s--;
	for (i = longstr; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
