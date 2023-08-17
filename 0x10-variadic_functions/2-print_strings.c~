#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
*print_strings - sum numbers
*@separator : number of arguments
*@n : number of argument
*@... : elipsus
*Return: return the sum
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	char *mid;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		mid = va_arg(nums, char *);
		if (mid == NULL)
			printf("nil");
		else
			printf("%s", mid);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
