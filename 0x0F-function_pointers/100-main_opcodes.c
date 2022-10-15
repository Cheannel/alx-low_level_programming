#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * description: prints the opcodes of its own main function
 * @argc: the number of arguments passed
 * @argv: an array of pointer to the passed arguments
 * Return: always success(0)
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (i == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
