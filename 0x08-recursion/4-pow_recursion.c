#include "main.h"
/**
* _pow_recursion - check if charcter is an alphabet
* @x : pointer argument
* @y : number
* Return: 1 if alphabet and 0 otherwise
*/
int _pow_recursion(int x, y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
