#include "main.h"

/**
 * jack_bauer - prints every min of the day
*/

void jack_bauer(void)
{
	int hr = 0, min;

	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');

			min++;
		}

		hr++;
	}
}
