#include "main.h"


/**
 * rev_string - Reverses a string
 * @s: input
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, j, k;
	char *a, rev;

	a = s;
	while (s[j] != '\0')
	{
		j++;
	}
	for (k = 1; k < j; k++)
	{
		a++;
	}
	for (i = 0; i < (j / 2); i++)
	{
		rev = s[i];
		s[i] = *a;
		*a = rev;
		a--;
	}
}
