#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int num, h, i, j;

	h = 0;
	i = 1;
	for (num = 0; num < 50; num++)
	{
		j = h + i;
		h = i;
		i = j;
		printf("%lu", j);
		if (num == 49)
			putchar('\n');
		else
		{
			printf(",");
		}
	}
	return (0);
}
