#include <stdio.h>
#include "main.h"
int main()
{
	char s1[] = "abobaker", s2[] = "altom";
	char *ptr = str_concat(s1, s2);
	printf("%s\n", ptr);
	return (0);
}