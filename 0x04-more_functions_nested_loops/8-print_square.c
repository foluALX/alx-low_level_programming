#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: input
 * Return: returns # in multiples of size
*/

void print_square(int size)
{
	int hash, num;

	if (size > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
