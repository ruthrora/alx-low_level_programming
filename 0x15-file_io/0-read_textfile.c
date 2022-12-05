#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the standard output
 * @filename:  pointer to the file
 * @letters:  number of letters it should read and print
 *
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *text;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(text);
		return (0);
	}

	free(text);
	close(o);

	return (w);
}
