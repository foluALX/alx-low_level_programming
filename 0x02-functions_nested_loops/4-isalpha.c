#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * letters, lowercase and uppercase
 * @c: reads functions argument
 * Return: returns 1 if c is a letter, lowercase
 * or uppercase, else returns 0
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
