#include "main.h"

/**
 * numlength - returns length of string
 * Description: check for length of string
 * @num: input
 * Return: number of digits
*/

int numLength(int num)
{
	int len = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		len += 1;
	}

	return (len);
}

/**
 * main - entry point
 * Description: prints the first 98 fibonacci numbers starting
 * with 1 and 2
 * Return: returns 0
*/

int main(void)
{
	int count, initials;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sumo = 0;

	for (count = 1; count <= 98; ++count)
	{
		if (f10 > 0)
		{
			printf("%lu", f10);
		}
		initials = numLength(mx) - 1 - numLength(f1);

		while (f10 > 0 && initials > 0)
		{
			printf("%d", 0);
			--initials;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f10 + f20 + (f1 + f2) / mx;
		f1 = f2;
		f10 = f20;
		f2 = sum;
		f20 = sumo;

		if (count != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
