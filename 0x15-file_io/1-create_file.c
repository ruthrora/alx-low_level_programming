#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text: the text in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k])
			k++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, k);

	if (i == -1 || j == -1)       
		return (-1);
close(i);

return (1);
}
