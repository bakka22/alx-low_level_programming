#include <stdio.h>
/**
*main - the main function
*Return: returns 0 (success)
*/
int main(void)
{
	int i;
	unsigned long int result, pre, cur, out;

	pre = 0;
	result = 1;
	cur = 1;
	for (i = 0; i <= 32; i++)
	{
		result = cur + pre;
		pre = cur;
		cur = result;
		if (result % 2 == 0)
			out = out + result;
	}
	printf("%lu", out);
	return (0);
}
