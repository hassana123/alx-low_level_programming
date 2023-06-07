#include "main.h"

int check_palindrome(char *s, int i, int length);
int strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 *
 * Return: 1 if true else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - returns lenght of strring
 * @s: string
 *
 * Return: lenght of string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks recursively for palindrome
 * @s: strin
 * @i: iterator
 * @length: length of string
 *
 * Return: 1 if pali 0 if not
 */
int check_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_palindrome(s, i + 1, length - 1));
}
