#include "main.h"

/**
 * print_last_digit - a function to print last digit of no
 * @n: arguments for function
 * Return: returns the value of the last digit of n
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = -1 * (n % 10);
	}
	else
	{
		lastdigit = n % 10;
	}

	_putchar(lastdigit + '0');
	return (lastdigit);
}
