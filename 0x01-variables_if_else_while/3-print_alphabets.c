#include <stdio.h>

/**
 * main - entry point
 * Description: a program that prints in lowercase and in uppercase
 * Return: returns 0
*/

int main(void)
{
	char alpha = 'a';
	char alpha_1 = 'A';

	/*print in lowercase */
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	/* print uppercase */
	while (alpha_1 <= 'Z')
	{
		putchar(alpha_1);
		alpha_1++;
	}
	putchar('\n');

	return (0);
}
