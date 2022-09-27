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
	int i, j, p;
	int sum0 = sum1 = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		sum0 += *(a + p);
	}

	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - sum0 - j);
		sum1 += *(a + p);
	}

	printf("%i, %i\n", sum0, sum1);
}
