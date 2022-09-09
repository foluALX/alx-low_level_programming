#include <stdio.h>

/**
 * main- entry point
 * Description: print all single number and follow with a comma
 * Return: returns 0
*/

int main(void)
{
	int num;

	/* 48-57 is the representation of 0-9 in ASCII */
	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
