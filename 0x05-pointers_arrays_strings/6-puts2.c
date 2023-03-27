#include "main.h"

/**
 * puts2 - prints every other char of a string
 * from first followed by a new line
 * @str: the string
 */
void puts2(char *str)
{
	int longstr = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		longstr++;
	}
	t = longstr - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
