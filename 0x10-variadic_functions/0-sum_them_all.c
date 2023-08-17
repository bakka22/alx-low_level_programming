#include <stdarg.h>
/**
*sum_them_all - sum numbers
*@n : number of arguments
*@... : elipsus
*Return: return the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list nums;

	if (n == 0)
		return (0);

	result = 0;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(nums, int);
	}
	va_end(nums);
	return (result);

}
