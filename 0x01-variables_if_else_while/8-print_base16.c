#include <stdio.h>

/**
 * main- entry point
 * Description: print all numbers of base16 in lowercase
 * Return: returns 0
*/

int main(void)
{
	int num = 48; /* 48 is the decimal representation of 0 */

	while (num <= 102) /* 102 is the decimal rep of f */
	{
		putchar(num);

		/* after rep of 9 we jump to 96 */
		if (num == 57)
		{
			num += 39;
		}
		num++;
	}
	putchar('\n');

	return (0);
}
