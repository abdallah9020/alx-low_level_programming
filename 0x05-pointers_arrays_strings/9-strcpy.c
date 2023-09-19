#include "main.h"
#include <string.h>

/**
 * _strcpy - enter
 * @dest: string
 * @src: string
 * Return: dest sting
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int lenght = strlen(src);

	for (i = 0; i <= lenght; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
