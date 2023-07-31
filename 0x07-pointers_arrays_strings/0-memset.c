/**
* _memset - check if charcter is an alphabet
* @s : pointer argument
* @b : pointer argument
* @n : number
* Return: 1 if alphabet and 0 otherwise
*/
char *_memset(char *s, char b, int n)
{
	char *p;
	int i;

	p = s;
	for (i = 0; i < n; i++)
	{
		*p = b;
		p += 1;
	}
	return (p);
}
