#include <stdio.h>

/**
* main - check if charcter is an alphabet
* Return:  0
*/
int main(void)
{
	long long i, chk;

	chk = 612852475143;

		for (i = chk; i < 1; i--)
		{
			if (i % 9 != 0 && i % 8 != 0 && i % 7 != 0 && i % 6 != 0 && i % 5 != 0 && i % 4 != 0 && i % 3 != 0 && i % 2 != 0 )
			{
				if (chk % i == 0)
				{
					printf("%lld \n", i);
					printf("hello\n");
				}
			}
		}
	return (0);
}
