#include <stdio.h>

/**
 * main - Print digits from 0 - 9
 *
 * Return: 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
