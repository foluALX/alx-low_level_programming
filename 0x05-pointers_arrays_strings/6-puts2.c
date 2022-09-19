#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string params
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * puts2 - prints one char out of a string
 * @str: pointer to a string
 * Return: returns nothing
*/

void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
