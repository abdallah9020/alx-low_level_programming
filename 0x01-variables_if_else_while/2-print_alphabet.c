#include <stdio.h>
/**
 * main - entry
 *
 * Return: Always 0
*/
int main(void)
{
	int i;
	char alpha = 'a';

	for (i = 1; i < 27; alpha++, i++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
