#include "main.h"

/**
 * rev_string - a program to reverse a string
 * @s: string param
 * Return: returns nothing
*/

void rev_string(char *s)
{
	int i = 0, j;
	char c, d;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (j = 0; j < i; j++)
	{
		c = s[j];
		d = s[i];
		s[j] = d;
		s[i] = c;
		i--;
	}
}
