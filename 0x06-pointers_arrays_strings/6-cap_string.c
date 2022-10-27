#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @s: string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *s)
{
	int a, b;
	int cap = 32;
	int seperators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ',
		'\n', '\t'};
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - cap;
		}
		cap = 0;

		for (b = 0; b <= 12; b++)
		{
			if (s[a] == separators[b])
			{
				b = 12;
				cap = 32;
			}
		}
	}
	return (s);
}
