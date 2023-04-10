#include "main.h"

/**
 * _strcpy - a function tha copies string pointec to src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + 1) != '\0')
	{
		m++;
	}
	for ( ; n < 1 ; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
