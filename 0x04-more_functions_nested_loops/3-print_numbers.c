#include "main.h"

/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9
 * Return: print to stdout the alphabet
*/

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}