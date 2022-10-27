°include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @r: pointer
 * Return: Always 0 (Success)
 */
char *rot13(char *r)
{
	int a;
	int b;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(r + a) != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (*(r + a) == c[b])
			{
				*(r + a) = d[b];
				break;
			}
		}
	}
	return (r);
}
