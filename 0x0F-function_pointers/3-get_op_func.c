#include <stddef.h>
#include "3-calc.h"
/**
*get_op_func - decide operation
*@s : input char
*Return: operation function
*/
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

	i = 0;
	while ((ops[i]).f != NULL && (ops[i]).op[0] != s[0])
		i++;

	return ((ops[i]).f);
}
