#include <stdio.h>

/**
 * main - enter
 *
 * Return: Always 0
*/

int main(void)
{
	int i;
	int sum;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
	return (0);
}
