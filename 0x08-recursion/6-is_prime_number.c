#include "main.h"

/**
 * is_prime_number - returns a prime number
 * @n: takes in an integer
 * Return: 1 if n is a prime number or
 * 0 if not
*/

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (pnumber(2, n));
}

/**
 * pnumber - help find prime number
 * @x: integer
 * @n: integer
 * Return: 1 if prime 0 if not
*/

int pnumber(int x, int n)
{
	if (n == x)
		return (1);
	els if (n % x == 0)
		return (0);
	return (pnumber(x + 1, n));
}
