#include <stdio.h>

/**
 * main - entry point
 * description: a program that prints the name of the file it was compiled from
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
