#include <stdio.h>

/**
 * main - entry point
 * Description: printing the sum of all the multiples of 3 and 5
 * Return: always 0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);

	return (0);
}


