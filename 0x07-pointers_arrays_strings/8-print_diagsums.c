#include "main.h"

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of array
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, row;
	int sum0 = sum1 = 0;

	for (row = 0; i < size; row++)
	{
		i = (row * size) + row;
		sum0 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum1 += a[i];
	}

	printf("%d, %d\n", sum0, sum1);
}
