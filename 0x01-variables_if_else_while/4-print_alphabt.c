#include <stdio.h>

/**
 * main - entry  point
 * Description: prints alphabet excluding q and e
 * Return: returns 0
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' || alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
