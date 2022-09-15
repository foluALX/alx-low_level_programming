#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
*/

void print_number(int n)
{
	unsigned int num = n;

	/*check if n is negative*/
	if (n < 0)
	{
		num = num * -1;
		_putchar('-');
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
	{
		_putchar((num / 10) + 48);
	}

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
