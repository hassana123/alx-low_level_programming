#include "main.h"

/**
 * *_memcpy - a function that copies n bytes
 * from mem area src to mem area dest
 * @n: input bytes
 * @src: memory area
 * @dest: destination memory area
 * Return: a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int a;

	a = n;
	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
