#include <stdio.h>

/**
 * print_to_98 - print al natural number to 98 frm n
 * 
 * @n: n
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				n++;
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				i--;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
	}

}
