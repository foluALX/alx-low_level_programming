#include <stdio.h>

/**
 * main - entry point
 * Description: print numbers from 0-9
 * Return: returns 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");

	return (0);
}
