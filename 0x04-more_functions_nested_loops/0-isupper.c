#include "main.h"

/**
 * _isupper - returns 1 if uppercase else returns 0
 * @c: input
 * Return: returns 1 for uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
