#include "main.h"
#include <string.h>

/**
 * puts_half - enter
 * @str: string
*/

void puts_half(char *str)
{
	int i, n;
	int lenght = strlen(str);

	n = lenght / 2;
	for (i = lenght - n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
