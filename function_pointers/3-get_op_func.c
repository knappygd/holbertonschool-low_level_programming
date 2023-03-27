#include "calc.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};

    	int i;

	while (i < 5)
	{
		if (*(ops[i].op) != *s)
			i++;
	}

	return (ops[i].f);
}
