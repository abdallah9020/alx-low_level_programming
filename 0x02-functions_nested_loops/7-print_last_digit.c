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

	last = n % 10;
	if (last < 0)
		last = -1 * last;
	_putchar('0' + last);
	return (last);
}
