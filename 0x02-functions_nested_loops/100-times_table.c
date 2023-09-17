#include "main.h"

/**
 * print_times_table - entry
 * @n : n
 * Return: void
*/

void print_times_table(int n)
{
	int x;
	int y;
	int product;
	int middle;

	if (n < 0 || n > 15)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			product = x * y;
			if (product <= 9)
			{
				_putchar('0' + product);
				if (y < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}

			}
			else if (product >= 10 && product <= 99)
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
				if (y < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				middle = (product / 10) % 10;
				_putchar('0' + product / 100);
				_putchar('0' + middle);
				_putchar('0' + product % 10);
				if (y < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
