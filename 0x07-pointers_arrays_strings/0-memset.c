#include "main.h"

/**
 * *_memset - a function that fills n bytes ofthe memory area
 * pointed to by s with the constant byte b
 * @s: input pointer
 * @b: constant byte
 * @n: usigned long int
 *
 * Return: modified array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
