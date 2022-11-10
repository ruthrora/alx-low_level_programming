#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array pointer
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int num = 0;
	int p;
	int q = 0;
	int r = 0;
	char *pointer = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		while (av[p][r] != '\0')
		{
			num = num + 1;
			r++;
		}
		num++;
		r = 0;
	}

	num++;
	pointer = malloc(num * sizeof(char));

	if (pointer == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{

		while (av[p][r] != '\0')
		{
			pointer[q++] = av[p][r];
			r++;
		}
		pointer[q++] = '\n';
		r = 0;
	}

	pointer[q] = '\0';

	return (pointer);
}
