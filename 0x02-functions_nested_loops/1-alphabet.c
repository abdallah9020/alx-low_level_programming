#include "main.h"

/**
 * print_alphabet - entry
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
	int i;
	char alpha = 'a';

	for (i = 1; i < 27; alpha++, i++)
		_putchar(alpha);
	_putchar('\n');
	return;
}
