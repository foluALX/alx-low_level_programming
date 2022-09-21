#include "main.h"

/**
 * reverse_array - a function that reverses content of an arr
 * @a: pointer to int array
 * @n: number of elements to swap
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int b, i, j;

	j = n - 1;

	for (i = 0; i < j; ei++, j--)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
	}
}
