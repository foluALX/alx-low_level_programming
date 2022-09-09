#include <stdio.h>

/**
 * main - entry point
 * Description: a program that prints in lowercase and in uppercase
 * Return: returns 0
*/

int main(void)
{
	char alpha = 'a';

	/*print in lowercase */
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	/* print uppercase */
	while (alpha <= 'z')
	{
		putchar(alpha + 32);
		alpha++;
	}
	putchar('\n');

	return (0);
}
