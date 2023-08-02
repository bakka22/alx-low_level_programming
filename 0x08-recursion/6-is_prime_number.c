#include "main.h"
/**
* is_prime_number2 - check if charcter is an alphabet
* @n : pointer argument
* @y : number
* Return: 1 if alphabet and 0 otherwise
*/
int is_prime_number2(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0)
		return (0);

	return (is_prime_number2(n, y - 1));
}
#include "main.h"
/**
* is_prime_number - check if charcter is an alphabet
* @n : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int is_prime_number(int n)
{
	return (is_prime_number2(n, (n / 2) - 1));
}
