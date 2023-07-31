/**
* _strpbrk - check if charcter is an alphabet
* @s : pointer argument
* @accept : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (;; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		if (s[i] == '\0')
			return ('\0');
	}
	return ('\0');
}
