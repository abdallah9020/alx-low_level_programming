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

	for (x = 1; x <= 50; x++)
	{
		i = back + back2;
		if (x < 50)
			printf("%ld, ", i);
		else
			printf("%ld", i);
		back2 = back;
		back = i;
	}
	printf("\n");
	return (0);
}
