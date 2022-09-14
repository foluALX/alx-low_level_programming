#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 * with each digit seperated by comma and space
 * @n: input
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
			printf("%d, ", count);
		}
	}
	else
	{
		for (count = n; count < 98; count++)
		{
			printf("%d, ", count);
		}
	}
	/* always end with 98 */ 
	printf("98\n");
}
