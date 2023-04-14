#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: firt string
 * @s2: second string
 * @n: num of bytes
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, len1, len2;

	i = 0, j = 0, len1 = 0, len2 = 0;
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n  < len2)
		string = malloc(sizeof(char) * (len1 + n + 1));
	else
		string = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!string)
		return (NULL);
	while (i < len1)
	{
		string[i] =  s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		string[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		string[i++] = s2[j++];

	string[i] = '\0';
	return (string);
}
