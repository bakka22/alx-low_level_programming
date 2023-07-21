#include "main.h"
#include <stdio.h>

int main(void)
{
print_remaining_days(2, 60, 2000);
print_remaining_days(2, 60, 1999);
print_remaining_days(2, 60, 1996);
print_remaining_days(3, 60, 2000);
print_remaining_days(2, 61, 2000);
return 0;	
}