#include "main.h"

/**
 * _isalpha - checks if charater is an alphabetic charater
 * @c: is the character to be checked
 * Return: 1 if true , otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
