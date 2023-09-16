#include "main.h"
#include <limits.h>

/**
 * print_last_digit - name
 *
 * @n : number
 *
 * Return: ast digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = n % 10;
		last = -1 * last;
		_putchar('0' + last);
	}
	else
	{
	_putchar('0' + (n % 10));
	return (n % 10);
	}
}
