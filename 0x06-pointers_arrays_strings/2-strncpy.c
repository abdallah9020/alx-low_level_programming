#include <string.h>

/**
 * _strncpy - enter
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int lenght = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}