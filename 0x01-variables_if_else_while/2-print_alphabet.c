#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	printf("\n");

	return (0);
}
