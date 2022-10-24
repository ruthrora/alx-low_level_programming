#include "main.h"
 /**
  * _strlen -  function that returns the length of a string.
  * @s: Paramater to  change
  * Return: 0
  */
int _strlen(char *s)
{
	int l:
		while (*s != '\0')
		{
			l = l + 1;
			s = s + 1;
		}
	return (l);
}
