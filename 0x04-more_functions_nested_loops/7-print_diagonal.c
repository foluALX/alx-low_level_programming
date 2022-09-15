#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input
 * Return: returns \ n times
*/

void print_diagonal(int n)
{
	int slash = 0, space;

	if (n > 0)
	{
		while (slash < n)
		{
			for (space = 0; space <= slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
			slash++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
