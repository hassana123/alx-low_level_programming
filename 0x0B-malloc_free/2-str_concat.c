#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *cncat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	cncat = malloc(sizeof(char) * (i + j + 1));
	if (cncat == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		cncat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cncat[i] = s2[j];
		i++;
		j++;
	}
	cncat[i] = '\0';
	return (cncat);
}

