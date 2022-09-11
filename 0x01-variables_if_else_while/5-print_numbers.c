#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Description: printing single digit numbers
 * Return: (0)
 */
int main(void)
{
	int z;

	for (z = '0'; z < 10; z++)
	{
		printf("%d", z);
	}
	putchar('\n');
	return (0);
}
