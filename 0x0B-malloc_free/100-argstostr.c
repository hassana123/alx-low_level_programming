#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: input integer
 * @av: array input
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i, n, j = 0, s = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			s++;
	}
	s += ac;

	str = malloc(sizeof(char) * s + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[j] = av[i][n];
			j++;
		}
		if (str[j] == '\0')
			str[j++] = '\n';
	}
	return (str);
}
