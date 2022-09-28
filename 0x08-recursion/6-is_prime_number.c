#include "main.h"

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
	else if (n % x == 0)
		return (0);
	return (pnumber(x + 1, n));
}

/**
 * is_prime_number - evaluate prime number or not
 * @n: integer
 * Return: return 1 if prime and 0 if not
*/

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (pnumber(2, n));
}
