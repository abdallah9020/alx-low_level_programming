#include "main.h"

/**
 * print_last_digit - name
 *
 * @n : number
 *
 * Return: ast digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -1 * n;
	_putchar('0' + (n % 10));
	return (n % 10);
}