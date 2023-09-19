/**
 * _atoi - enter
 * @s: string
 * Return: 0 if no numbers found
*/

int _atoi(char *s)
{
	int i, j;
	int plus = 0, minus = 0;
	int combien = 0; /*how many continuous digits*/
	int first;  /*first occurance of a digit from '0' to '9'*/
	int num;

	for (i = 0; s[i] != '\0'; i++)  /*only colecting data*/
	{
		if (s[i] == '+')
			plus += 1;
		if (s[i] == '-')
			minus += 1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			first = i;
			for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
				combien += 1;
		}
	}
	if (combien == 0) /*that's mean no digits!*/
		return (0);
	else
		for (i = first + combien -1; i >= first; i--)
			dec = s[i];

}
