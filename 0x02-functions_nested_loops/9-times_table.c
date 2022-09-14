#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int i = 0, j, prod;

	while (i <= 9)
	{
		_putchar(48); /* print 0 first on every line */
		j = 1;

		while (j <= 9)
		{
			/* print , and whitespace next */
			_putchar(',');
			_putchar(' ');

			prod = i * j;
			if (prod <= 9)
			{
				_putchar(' ');
			}

			/* get first digit */
			_putchar(prod + 48);

			/* get second digit */
			/* _putchar((prod % 10) + 48); */

			j++;
		}
		_putchar('\n');
		i++;
	}
}
