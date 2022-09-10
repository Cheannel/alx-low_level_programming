#include <stdio.h>
/**
 * main - entry point
 * Description: printing alphabet in lowercase
 * Return: (0)
 */
int main(void)
{
	int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
