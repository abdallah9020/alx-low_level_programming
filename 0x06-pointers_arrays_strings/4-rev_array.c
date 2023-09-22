#include <string.h>

/**
 * reverse_array - enter
 * @a: a
 * @n: n
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tepm = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
