#include "main.h"

/**
 * swap_int - swaps value of 2 integers
 * @a: first parameter
 * @b: second parameter
 * Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
