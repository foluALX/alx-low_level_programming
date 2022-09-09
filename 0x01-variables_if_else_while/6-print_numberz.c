#include <stdio.h>

/**
 * main - entry point
 * Description: print numbers in base 10 using putchar
 * Return: returns 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		/* convert num to ASCII representation */
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
