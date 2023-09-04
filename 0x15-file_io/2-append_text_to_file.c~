#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
*create_file - reads a text file
*@filename : the name of the file
*@text_content : the number of letters to read
*Return: the actual number of letters it could read
*/
int create_file(const char *filename, char *text_content)
{
	int x, i;
	ssize_t ch;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_RDWR | O_CREAT | O_DSYNC | O_TRUNC, 0600);
	if (x == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			ch = write(x, &(text_content[i]), 1);
			if (ch < 0)
				return (-1);
		}
	}
	close(x);
	return (1);
}
