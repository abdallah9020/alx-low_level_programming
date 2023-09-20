#include <string.h>

/**
 * _strcat - enter
 * @dest: string
 * @src: string
 * Return: dest sting
*/

char *_strcat(char *dest, char *src)
{
	int i, j;
	int lenght1 = strlen(dest);
	int lenght2 = strlen(src);

	for (i = lenght1, j = 0; j <= lenght2; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
