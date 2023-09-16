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
	if (n == INT_MIN)
		n = 18;  /* da7akt 3aleih haha */
	if (n < 0)
		n = -1 * n;
	_putchar('0' + (n % 10));
	return (n % 10);
}
