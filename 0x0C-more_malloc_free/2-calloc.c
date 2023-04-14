#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills me with a constant byte
 * @s: mem area to be filled
 * @c: char to cpy
 * @n: num oftimes for char to be copied
 *
 * Return: pointer to s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;
	return (s);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: num of arr element
 * @size: size of element
 *
 * Return: pointer to allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (NULL);
	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
