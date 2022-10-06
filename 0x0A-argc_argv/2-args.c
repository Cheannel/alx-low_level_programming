#include <stdio.h>
/**
 * main - main block
 * description: a program that prints all argucuments it receives
 * @argc: counts the number of supplied arguments
 * @argv: an array of pointers to the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
