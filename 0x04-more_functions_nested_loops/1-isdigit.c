#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: input
 * Return: returns 1 if digit else return 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
