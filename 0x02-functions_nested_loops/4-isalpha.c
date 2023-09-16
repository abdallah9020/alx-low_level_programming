/**
 * _isalpha - enter
 *
 *@c : parameter c is an int
 *
 * Return: 1 if alpha and 0 if not apha
*/

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z' || c >= 'A' && c <= 'Z1')
		return (1);
	else
		return (0);
}
