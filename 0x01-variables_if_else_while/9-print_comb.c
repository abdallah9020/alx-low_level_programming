#include <stdio.h>

/**
 * main - entry
 *
 * Return: Always 0
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '9')
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i);
	}	
	putchar('\n');
	return (0);
}
