#include "main.h"

/**
* _islower - check if charcter is in lowercase
* @c: the number to be checked
* Return: 1 if lowercase and 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
