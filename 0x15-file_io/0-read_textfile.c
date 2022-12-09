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
	int i;
	ssize_t rd, wr;
	char *text;

		if (filename == NULL)
			return (0);
	i = open(filename, 0_RDONLY);

	if (i == -1)
		return (0);

	text = malloc(sizeof(char) * (letters));
	if (!text)
		return (0);

	rd = read(i, text, letters);
	wr = write(STDOUT_FILENO, text, rd);

	close(i);

	free(text);

	return (nwr);
}
