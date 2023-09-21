/**
 * _strcmp - enter
 * @s1: string
 * @s2: string
 * Return: -1  or  0  or  1
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1 < s2)
		{
			return (-1);
		}
		else
			continue;

	}
	if (strlen(s1) == strlen(s2))
		return (0);
	else if (strlen(s1) < strlen(s2))
		return (-1);
	else
		return (1);
}
