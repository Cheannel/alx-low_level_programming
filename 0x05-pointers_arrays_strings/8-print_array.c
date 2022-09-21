#include "main.h"
#include <stdio.h>
/**
 * print_array - main block
 * description: prints n elements of an array of integers
 *@a: the array of numbers
 *@n: the number of elements
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
	if (z == n - 1)
		continue;
	else
		printf(", ");
	}
	printf("\n");
}
