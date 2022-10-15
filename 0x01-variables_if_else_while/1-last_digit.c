#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int l;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("%s %d and is greater than 5\n", n);
	else if (l == 0)
		printf("%s %d and is 0\n", n);
	else if (l < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", n);

	return (0);
}
