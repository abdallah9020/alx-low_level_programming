#include "main.h"

/**
 * print_alphabet_x10 - entry
 *
*/

void print_alphabet_x10(void)
{
	int i;
	int j;
	char alpha = 'a';

	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i < 27; alpha++, i++)
			_putchar(alpha);
		_putchar('\n');
	}
}
