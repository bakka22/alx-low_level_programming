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
	for (i = 0; i <= 49; i++)
	{
		result = cur + pre;
		pre = cur;
		cur = result;
		if (i == 49)
			printf("%lu\n", result);

		else if (i < 49)
			printf("%lu, ", result);
	}
	return (0);
}
