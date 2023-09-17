#include "main.h"
#include <stdio.h>

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
				if (y > 0)
					printf(",   ");
				printf("%d", product);
			}
			else if (product >= 10 && product <= 99)
			{
				if (y > 0)
					printf(",  ");
				printf("%d", product);
			}
			else
			{
				middle = (product / 10) % 10;
				if (y > 0)
					printf(", ");
				printf("%d", product);
			}
		}
		_putchar('\n');
	}
}
