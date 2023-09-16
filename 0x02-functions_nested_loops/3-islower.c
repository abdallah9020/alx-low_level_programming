/**
 * _islower - enter
 *
 * Return: 1 if lower and 0 if not lower
*/

int _islower(int c) /*parameter c is an integer*/
{
	if ('a' <= c <= 'z')
		return (1);
	else
		return (0);
}
