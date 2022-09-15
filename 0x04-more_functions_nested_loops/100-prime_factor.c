#include "main.h"

/**
 * main - entry point
 * Description: check for a digits prime factor
 * Return: returns 0
*/

int main(void)
{
	long x, y;

	x = 612852475143;

	for (y = 2; x > y; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	printf("\n");

	return (0);
}
