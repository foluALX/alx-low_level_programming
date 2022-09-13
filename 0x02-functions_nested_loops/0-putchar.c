#include "main.h"

/**
 * main - entry point
 * Description: a program that prints _putchar
 * Return: returns 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
