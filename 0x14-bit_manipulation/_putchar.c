#include <unistd.h>
/**
* _putchar - print a charcter to stdout
*@c: charcter to be printed
*Return: nothing
*/
void _putchar(char c)
{
	write(1, &c, 1);
}
