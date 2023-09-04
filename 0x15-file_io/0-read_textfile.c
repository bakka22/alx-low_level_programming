#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
*read_textfile - reads a text file
*@filename : the name of the file
*@letters : the number of letters to read
*Return: the actual number of letters it could read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int x;
	char buffer;

	count = 0;
	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);
	while (read(x, &buffer, 1) && letters)
	{
		count++;
		write(1, &buffer, 1);
		letters--;
	}
	if (letters)
		count++;
	return (count);
}
