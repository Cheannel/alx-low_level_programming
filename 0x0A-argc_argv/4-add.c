#include <stdio.h>
/**
 * main - main block
 * description: a program that adds positive numbers
 * @argc: counts the number of passed arguments
 * @argv: an array of pointers to the passed arguments
 * Return: 1 if a number contains symbols that aren't digits
 * otherwise returns 0, for numbers that doesn't contain symbols
 */
int main(int argc, char *argv[])
{
	int n, digit, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (digit = 0; argv[n][digit]; digit++)
		{
			for ((argv[n][digit]) < '0' || (argv[n][digit] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += argv[n];
	}
	printf("%d\n", sum);
	return (0);
}
