#include "main.h"

/**
 * jack_bauer - entry
 *
 * Return: void
*/

void jack_bauer(void)
{
	int hour;
	int mins;

	for (hours = 0; i <= 23; hours++)
		for (mins = 0; mins  <= 59; mins++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			_putchar('\n');
		}
}
