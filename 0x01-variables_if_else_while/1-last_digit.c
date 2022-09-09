#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: print the value of n, value of the last digit of n
 * and print if the last digit is greater than or less than 5 or it is zero
 * Return: returns 0(success)
*/

int main(void)
{
	int n, digit;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* my code */
	digit = n % 10; /* modulus 10 will give the last digit */

	if (digit > 5)
	{
		printf("%d %i is %i and is greater than 5\n", last, n, digit);
	}

	else if (digit == 0)
	{
		printf("%d %i is %i and is 0\n", last, n, digit);
	}

	else
	{
		printf("%d %i is %i and is less than 6 and not 0\n", last, n, digit);
	}

	return (0);
}
