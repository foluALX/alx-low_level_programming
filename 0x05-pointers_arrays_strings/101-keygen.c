#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: my keygen
 * Return: returns 0
*/

int main(void)
{
	int i;
	char c;

	srand(time(0));

	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);

	return (0);
}
