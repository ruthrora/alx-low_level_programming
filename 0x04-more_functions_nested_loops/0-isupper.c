#include "main.h"
/**
 * _isupper -  function that checks for uppercase character.
 * @c: input integer varable
 * Return: 1 if true, o if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
