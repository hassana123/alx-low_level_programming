#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the characters to stdout
 * @c: character to be written
 * Return: 1 (success), otherwise -1 is returned on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
