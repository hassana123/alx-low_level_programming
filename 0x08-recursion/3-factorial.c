#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number
 * using recursion
 * @n: number
 * Return: factorial or -1
 */
int factorial(int n)
{
	if (n >= 0)
		return (n + factorial(n - 1));
	return (-1);
}
