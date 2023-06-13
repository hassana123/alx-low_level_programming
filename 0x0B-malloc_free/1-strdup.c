#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: the character
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
