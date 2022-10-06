#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints the number of passed arguments into it
 * @argc: counts the number of supplied arguments
 * @argv: the arraynof pointers to the arguments
 * Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
