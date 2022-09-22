#include "main.h"
#include <string.h>
/**
 * reverse_array - entry point
 * Description: printing the contents of an array in reverse
 *@a: an array of elements to be reversed
 *@n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int y = 0;
	int z, tmp;

	for (z = n - 1; y < z; y++, z--)
	{
		tmp = a[y];
		a[y] = a[z];
		a[z] = tmp;
	}
}
