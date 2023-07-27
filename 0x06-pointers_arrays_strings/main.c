#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z a b c d e f g h i j k l m n o p q r s t u v w x y z"; 
	char *ptr;
	ptr = rot13(str);
	printf("%s\n", ptr);
	ptr = rot13(str);
	printf("%s\n", ptr);

    return (0);
}