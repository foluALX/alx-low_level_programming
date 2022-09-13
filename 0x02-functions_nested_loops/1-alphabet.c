#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar to print a-z
*/

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
