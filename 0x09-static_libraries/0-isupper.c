#include "main.h"

/**
* _isupper - check if charcter is in lowercase
* @c: the number to be checked
* Return: 1 if lowercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
