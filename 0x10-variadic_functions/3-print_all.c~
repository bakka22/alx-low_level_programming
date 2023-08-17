#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
*printer - filter format
*@brk : pointer argument
*@nums : va_list
*Return: pointer argument
*/
void printer(int brk, va_list nums)
{
	char *mid;

		switch (brk)
		{
			case 1:
				printf("%c", va_arg(nums, int));
				break;
			case 2:
				printf("%d", va_arg(nums, int));
				break;
			case 3:
				mid = va_arg(nums, char *);
				if (mid == NULL)
				{
					printf("nil");
					break;
				}
				printf("%s", mid);
				break;
			case 4:
				printf("%f", va_arg(nums, double));
				break;
			default:
				break;
		}
}

/**
*print_all - sum numbers
*@format : number of arguments
*@... : elipsus
*Return: return the sum
*/
void print_all(const char * const format, ...)
{
	int i = 0, brk = 0, pr = 0;
	va_list nums;
	/*char *mid;*/

	va_start(nums, format);
	while (format[i] != '\0')
	{
		brk = 0;
		while (!brk && format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
						brk = 1;
						pr += 1;
						break;
				case 'i':
						brk = 2;
						pr += 1;
						break;
				case 's':
						brk = 3;
						pr += 1;
						break;
				case 'f':
						brk = 4;
						pr += 1;
						break;
				default:
						brk = 0;
			}
			i++;
		}
		if (brk != 0 && pr != 1)
			printf(", ");

		printer(brk, nums);
	}
	printf("\n");
	va_end(nums);
}
