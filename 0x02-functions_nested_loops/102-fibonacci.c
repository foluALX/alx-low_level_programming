#include "main.h"

/**
 * main - entry point
 * Description: prints the first 50 fibonacci numbers
 * Return: returns 0
*/

int main(void)
{
	int count;
	unsigned long fibi = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibi + fib2;
		printf("%lu", sum);

		fibi = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
