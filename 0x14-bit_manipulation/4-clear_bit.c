#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long to change
 * @index: index to change to zero
 * Return: 1 if success else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}