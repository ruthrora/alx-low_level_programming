#include <stdio.h>
#define FILE_H

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0
 */
int main(void)
{

#ifndef FILE_H

	printf("%s\n", _FILE_);
#endif
	return (0);
}
