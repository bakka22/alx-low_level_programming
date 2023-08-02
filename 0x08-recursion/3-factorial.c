#include "main.h"
/**
* factorial - check if charcter is an alphabet
* @n : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
