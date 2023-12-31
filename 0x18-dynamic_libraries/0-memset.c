/**
* _memset - check if charcter is an alphabet
* @s : pointer argument
* @b : pointer argument
* @n : number
* Return: 1 if alphabet and 0 otherwise
*/
char *_memset(char *s, char b, int n)
{
	char *p, new;
	int i;

	new = b;
	p = s;
	for (i = 0; i < n; i++)
	{
		*p = new;
		p += 1;
	}
	return (s);
}
