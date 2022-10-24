#include "main.h"

/**
 * puts_half -  function that prints half of a string
 * @str: input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, m, leng;

	leng = 0;

	for (n = 0; str[n] != '\0'; n++)
		leng++;

	m = (leng / 2);

	if ((leng % 2) == 1)
		m = ((leng + 1) / 2);

	for (n = m; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
