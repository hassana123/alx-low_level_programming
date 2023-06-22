#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to calculate the sum of
 *
 * Return: if n is 0 returns 0 else sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sumofall = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sumofall += va_arg(ap, int);

	va_end(ap);
	return (sumofall);
}
