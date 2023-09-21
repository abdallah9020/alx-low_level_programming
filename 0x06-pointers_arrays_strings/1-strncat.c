#include <string.h>

/**
 * _strncat - enter
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest sting
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int lenght1 = strlen(dest);

	for (i = lenght1, j = 0; j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
