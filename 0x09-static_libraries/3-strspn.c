/**
* _strspn - check if charcter is an alphabet
* @s : pointer argument
* @accept : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, chk;
	unsigned int n;

	n = 0;
	chk = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n += 1;
				chk = 1;
				break;
			}
			else
			{
				chk = 0;
			}
		}
		if (chk == 0)
			return (n);
	}
	return (n);
}
