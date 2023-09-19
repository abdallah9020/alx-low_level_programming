#include "main.h"

/**
 * print_rev - enter
 * @s: string
*/

void print_rev(char *s)
{
	int lenght;
	int i;

	lenght = _strlen(s);
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
