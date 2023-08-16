#include <stddef.h>
/**
*print_name - initialize a dog var
*@name : name
*@f : functoin pointer
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
