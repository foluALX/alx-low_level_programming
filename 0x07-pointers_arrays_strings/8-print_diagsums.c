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
	int i;
	int sum0 = sum1 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sum0 += a[i];
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			sum1 += a[i];
		}
	}

	printf("%d, %d\n", sum0, sum1);
}
