#include "main.h"

/**
 * _puts - enter
 * @str: string
*/

void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
