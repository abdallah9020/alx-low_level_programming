#include <stdio.h>

/**
 * main - enter
 *
 * Return: Always 0
*/

int main(void)
{
	unsigned long i;
	unsigned long back = 1;
	unsigned long back2 = 0;
	int x;

	for (x = 1; x <= 98; x++)
	{
		i = back + back2;
		if (x < 98)
			printf("%lu, ", i);
		else
			printf("%lu", i);
		back2 = back;
		back = i;
	}
	printf("\n");
	return (0);
}
