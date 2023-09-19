#include "main.h"

/**
 * print_rev - enter
 * @s: string
*/

void print_rev(char *s)
{
	int i;
	int j;
	int lenght = 0;

	for (j = 0; s[j] != '\0'; j++)
		lenght += 1;

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
