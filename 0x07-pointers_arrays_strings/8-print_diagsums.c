#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: input
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int sumX;
	int sumY;
	int i;

	for (i = 0; i < size; i++)
	{
		sumX = sumX + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumY = sumY + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumX, sumY);
}
