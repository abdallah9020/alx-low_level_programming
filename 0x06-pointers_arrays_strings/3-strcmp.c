#include <string.h>

/**
 * _strcmp - enter
 * @s1: string
 * @s2: string
 * Return: -1  or  0  or  1
*/

int _strcmp(char *s1, char *s2)
{
	int lenght1, length2;

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (length1 > length2)
	{
		return (1);
	}
	else if (length1 == length2)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
