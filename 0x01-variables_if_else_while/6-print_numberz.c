#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * REturn: Always 0 (Success)
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
