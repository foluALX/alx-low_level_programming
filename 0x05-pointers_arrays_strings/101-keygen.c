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
	int i = j = k = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (j < 2772)
	{
		i = rand() % 128;

		if ((j + i) > 2772)
		{
			break;
		}

		j += i;
		k++;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));

	return (0);
}
