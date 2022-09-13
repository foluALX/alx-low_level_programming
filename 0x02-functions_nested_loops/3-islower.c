#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: checks arg of function
 * Return: returns 1 if arg is lowercase
 * else return 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
