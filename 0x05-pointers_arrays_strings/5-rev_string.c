#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: parameter to change
 */
void rev_string(char *s)
{
	int intial = 0, finish = o;
	char c;

	while (s[finish] != 0)
		finish++;
	finish--;

	while (initial < finish)
	{
		c = s[initail];
		s[initial] = s[finish];
		s[finish] = c;
		initial++;
		finish--;
	}
}
