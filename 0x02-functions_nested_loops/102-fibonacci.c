#include <stdio.h>
/**
*main - the main function
*Return: returns 0 (success)
*/
int main(void)
{
	int i;
	unsigned long int result, pre, cur;

	pre = 0;
	result = 1;
	cur = 1;
	for (i = 1; i <= 50; i++)
	{
		if (i < 50)
		{
			result = cur + pre;
			pre = cur;
			cur = result;
			printf("%lu, ", result);
		}
		else
			printf("%lu", result);
	}
	return (0);
}
