#include "main.h"
/**
* is_palindrome2 - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int is_palindrome2(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + is_palindrome2(s + 1));
}

#include "main.h"
/**
* is_palindrome3 - check if charcter is an alphabet
* @s : pointer argument
* @p : pointer
* Return: 1 if alphabet and 0 otherwise
*/
int is_palindrome3(char *s, char *p)
{
	if (*s != *p)
		return (0);
	if (*s == '\0')
		return (1);
	return (is_palindrome3(s + 1, p - 1));
}

#include "main.h"
/**
* is_palindrome - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int is_palindrome(char *s)
{
	char *p2;

	p2 = s;
	p2 = p2 + (is_palindrome2(s) - 1);
	return (is_palindrome3(s, p2));
}
