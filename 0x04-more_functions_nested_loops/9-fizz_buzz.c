#include "main.h"

/**
 * main - entry point
 * Description:  a program that prints the numbers from 1 to 100
 * and replaces multiples of 3, 5 and 3 and 5 with specific words
 * Return: returns 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
