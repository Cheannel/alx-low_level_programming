#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry point
 * description: concatenates all the arguments of the program into a string
 * @ac: the number of arguments supplied to the program
 * @av: an array of pointers that holds the string values
 * Return: NULL if ac == 0, av == 'NULL' or if it fails
 * else, a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, arg, byte, size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
		str = malloc(sizeof(char) * size + 1);
		if (str == NULL)
			return (NULL);
		i = 0;
		for (arg = 0; arg < ac; arg++)
		{
			for (byte = 0; av[arg][byte]; byte++)
				str[i++] = av[arg][byte];
			str[i++] = '\n';
		}
		str[size] = '\0';
		return (str);
}
