#include "main.h"

/**
 * swap_int - this program swaps the value of two integers
 * @a: integer to be swapped
 * @b: interger to be swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
