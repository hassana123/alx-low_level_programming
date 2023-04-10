#include "main.h"

/**
 * *_strchr - a function that locates the first occurence
 * of a specific char
 * @c: the char to be located
 * @s: input string
 * Return: a pointer to the first occurrence of char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
