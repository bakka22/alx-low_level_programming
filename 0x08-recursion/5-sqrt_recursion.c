#include "main.h"
/**
* _sqrt_recursion2 - check if charcter is an alphabet
* @n : pointer argument
* @y : number
* Return: 1 if alphabet and 0 otherwise
*/
int _sqrt_recursion2(int n, int y)
{
	int count;

	count = 1;
	if (n == 0)
	{
		count = 0;
		return (count);
	}
	if (n < 0)
	{
		count = -2147483648;
		return (count);
	}
	n = n - y;
	count = count + _sqrt_recursion2(n, y + 2);
	return (count);
}
#include "main.h"
/**
* _sqrt_recursion - check if charcter is an alphabet
* @n : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int _sqrt_recursion(int n)
{
	int x;

	x = _sqrt_recursion2(n, 1);
	if (x < 0)
		return (-1);

	return (x);
}
