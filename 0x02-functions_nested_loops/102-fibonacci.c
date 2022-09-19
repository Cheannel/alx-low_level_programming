#include <stdio.h>

/**
 * main - main block
 * Description: printing the first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int count;
	long a = 0, b = 1, sum;

	for (count = 0; count <= 49; count++)
	{
		sum = a + b;
		printf("%ld", sum);

		a = b;
		b = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
