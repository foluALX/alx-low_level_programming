#include "main.h"

/**
 * print_line- a function that draws a straight line in the terminal
 * @n: input
 * Return: print _
*/

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
