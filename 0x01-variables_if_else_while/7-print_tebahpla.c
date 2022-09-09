#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in reverse
 * Return: returns 0
*/

int main(void)
{
	char re_alpha;

	for (re_alpha = 'z'; re_alpha >= 'a'; re_alpha--)
	{
		putchar(re_alpha);
	}
	putchar('\n');

	return (0);
}
