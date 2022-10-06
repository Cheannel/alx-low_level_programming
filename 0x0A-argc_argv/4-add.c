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

