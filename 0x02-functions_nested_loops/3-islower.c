/**
 * _islower - enter
 *
 *@c : parameter c is an int
 *
 * Return: 1 if lower and 0 if not lower
*/

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
