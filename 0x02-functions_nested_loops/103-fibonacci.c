#include <stdio.h>

/**
 * main - enter
 *
 * Return: Always 0
*/

int main(void)
{
	long i;
	long back = 1;
	long back2 = 0;
	int x;
	long sum;

	for (x = 1; x < 10000; x++)
	{
		i = back + back2;
		if (i > 4000000)
		{
			printf("%d\n", sum);
			return (0);
		}
		if (i % 2 == 0)
			sum += i;
		back2 = back;
		back = i;
	}
}
