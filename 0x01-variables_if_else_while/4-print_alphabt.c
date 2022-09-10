#include <stdio.h>
/**
 * main - entry point
 * Direction: printing not all alphabet
 * Return: (0)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter = 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		else
		{
		}
		putchar('\n');
			return (0);
	}
}

