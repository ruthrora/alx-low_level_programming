#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if Number is positive , zero , or negative
 * Return: 0
 */
int main(void)
{
	int n;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%D is negative\n", n);
	}
	return (0);
}
