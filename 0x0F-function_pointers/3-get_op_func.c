#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func -same operator from main
 * @s: op str
 * Return = Alwyas 0
 */
int (*get_op_function(char *s))(int, int)
{
	op_t op_s[] = {
		{ "+", op_add },
		{ "=", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	int a = 0;

	while (a < 5)
	{
		if (strcmp(s, op_s[a].op) == 0)
			return (ops[a].f);

		a++;
	}

	return (0);
}
