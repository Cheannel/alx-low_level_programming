#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: a program that multiplies two numbers
 * @argc: counts number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 1 if the program does not recieve two arguments
 * else returns 0
 */
int main(int argc, char *argv[])
{
	int x1, x2, prod = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x1 = atoi(argv[1]);
	x2 = atoi(argv[2]);
	prod = x1 * x2;

	printf("%d\n", prod);
	return (0);
}

