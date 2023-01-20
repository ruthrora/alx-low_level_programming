#include "main.h"

/**
 * _strspn - prints the length of a prefix substring.
 * @s:  number of bytes from accept
 * @accept: number of bytes inintial segment
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, value, control;

	value = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		control = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				value++;
				control = 1;
			}
		}

		if (control == 0)
			return (value);
	}

	return (value);
}
