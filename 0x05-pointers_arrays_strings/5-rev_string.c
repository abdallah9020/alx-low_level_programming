#include "main.h"

/**
 * rev_string - enter
 * @s: string
*/

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	int lenght = 0;
	char temp;

	for (j = 0; s[j] != '\0'; j++)
		lenght += 1;

	for (i = lenght - 1, k = 0; i > k; i--, k++)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp
	}
}
