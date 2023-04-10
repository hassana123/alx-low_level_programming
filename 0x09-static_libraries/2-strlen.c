#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be taken
 * Return: returns the length
 */
int _strlen(char *s)
{
	int longstr = 0;

	while (*s != '\0')
	{
		longstr++;
		s++;
	}
	return (longstr);
}
