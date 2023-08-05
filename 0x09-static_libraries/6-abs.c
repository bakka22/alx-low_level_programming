#include "main.h"

/**
* _abs - check if charcter is an alphabet
* @i: the number under operation
* Return: local variable
*/
int _abs(int i)
{

	if (i < 0)
		return (i * -1);

	else if (i > 0)
		return (i);

	else
		return (0);
}
