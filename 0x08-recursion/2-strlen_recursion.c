#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * using recursion
 * @s: the string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		return (lenght++);
	}
	return (0);
}
