#include <stdio.h>

/**
 * main - entry point
 * description: a program that prints its name, followed by a new line
 * @argc: counts the number of passed arguments
 * @argv: the array of pointers to the arguments
 * Return: always 0
 */
int main(__attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
