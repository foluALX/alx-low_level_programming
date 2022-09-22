nclude "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: nothing
*/

void print_number(int n)
{
	int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (num > 9)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
