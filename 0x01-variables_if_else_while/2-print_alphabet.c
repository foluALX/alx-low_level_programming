#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabets in lowercase
 * Return: returns 0
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
