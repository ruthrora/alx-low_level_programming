#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' + c);
	for (c = 0; c < 26; ++c)
		putchar('A' + c);

	putchar('\n');

	return (0);
}
