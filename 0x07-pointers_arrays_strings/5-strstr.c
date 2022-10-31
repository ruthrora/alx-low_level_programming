#include "main.h"
#include <stdio.h>

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: where the first occurrence of the substring is
 * @needle: substring needed to be found
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *num1 = haystack;
		char *num2 = needle;

		while (*num1 == *num2 && *num2 != '\0')
		{
			num1++;
			num2++;
		}

		if (*num2 == '\0')
			return (haystack);
	}

	return (NULL);
}
