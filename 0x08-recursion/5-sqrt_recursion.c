#include "main.h"

/**
 * helper - find the square root of 2 numbers
 * @a: integer
 * @b: integer to test for the square root of @a
 * Return: square root
*/

int helper(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else
	{
		return (helper(a, b + 1));
	}

	return (1);
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: integer to return root of
 * Return: square root of @n
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (helper(n, 1));
}
