#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints an integer
 * @n: integer to be printed
*/

void print_number(int n)
{
	/*check if n is negative*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	/*print the first few digits*/
	if (n / 10)
	{
		print_number(n / 10);
	}

	/*print the last digit*/
	_putchar((n % 10) + '0');
}
