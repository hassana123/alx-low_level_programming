#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string
 * @accept: input bytes
 * Return: num of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned long int l = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				l++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (l);
			}
		}
		s++;
	}
	return (l);
}

