#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14
 * Return: returns 0 to 14 ten times
*/

void more_numbers(void)
{
	int num, count, mult;

	for (mult = 0; mult <= 9; mult++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar((count / 10) + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
