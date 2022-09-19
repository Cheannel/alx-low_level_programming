#include <stdio.h>
/**
 * main - entry point
 * Description: prints the first 98 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, sum;
	unsigned long f1, f2;
	unsigned long a_f1, a_f2, b_f1, b_f2;

	for (count = 0; count < 92; count++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}
	a_f1 = a / 10000000000;
	a_f2 = a % 10000000000;
	b_f1 = b / 10000000000;
	b_f2 = b % 10000000000;

	for (count = 93; count < 99; count++)
	{
		f1 = a_f1 + b_f1;
		f2 = a_f2 + b_f2;
		if (a_f2 + b_f2 > 9999999999)
		{
			f1 += 1;
			f2 %= 10000000000;
		}

		printf("%lu%lu", f1, f2);
		if (count != 98)
			printf(", ");

		a_f1 = b_f1;
		a_f2 = b_f2;
		b_f1 = f1;
		b_f2 = f2;

	}
	printf("\n");
	return (0);
}
