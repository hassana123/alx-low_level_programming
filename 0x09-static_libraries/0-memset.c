#include "main.h"

/**
 * _memset - fill a block in memwith a desired val
 * @s: start address
 * @b: desired val
 * @n: num of bytes to change
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
