#include "main.h"
 /**
  * _strlen -  function that returns the length of a sting
  * @s:string to count 
  * Return: String length
  */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
