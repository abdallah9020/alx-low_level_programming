/**
 * _strlen - enter
 * @s : string
 * Return: the lenght
*/

int _strlen(char *s)
{
	int i, lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
		lenght += 1;
	return (lenght);
}
