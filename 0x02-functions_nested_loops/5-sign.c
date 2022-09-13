#include "main.h"

/**
 * print_sign - a function to print signs of a number
 * @n: argument passed into a function
 * Return: prints + and returns 1 for positive numbers
 * prints 0 and returns 0 for numbers equal to zero
 * and prints - and returns -1 for numbers less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(0 + 43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(0 + 45);
		return (-1);
	}
	else
	{
		_putchar(0 + 48);
		return (0);
	}
}
