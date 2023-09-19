#include "main.h"

/**
 * print_rev - enter
 * @s: string
*/

void print_rev(char *s)
{
	int i;
	int j;
	int k;
	int lenght = 0;
	char temp[10000000];

	for (j = 0; s[j] != '\0'; j++)
		lenght += 1;

	for (i = lenght - 1, k = 0;k < lenght; i--, k++)
	{
		if (i == -1)
			break;
		temp[k] = s[i];
	}
	for (i = 0; i < lenght; i++)
		s[i] = temp[i];
}
