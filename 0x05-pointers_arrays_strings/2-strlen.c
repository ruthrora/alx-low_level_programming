#include "main.h"
 /**
  * _strlen -  function that returns the length of a string.
  * @s: Paramater to  change
  * Return: 0
  */
int _strlen(char *s)
{

	int countr;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
