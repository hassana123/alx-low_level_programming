#include "main.h"

/**
 * puts_half - prints  half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int a, n, longstr;

	longstr = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		longstr++;
	}
	n = (longstr / 2);

	if ((longstr % 2) == 1)
	{
		n = ((longstr + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
