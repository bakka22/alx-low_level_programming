#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
*read_textfile - reads a text file
*@filename : the name of the file
*@letters : the number of letters to read
*Return: the actual number of letters it could read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, checker;
	int x;
	char *buffer;

	count = 0;
	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	count = read(x, (void *)buffer, letters);
	checker = write(1, buffer, (size_t)count);
	if (checker < 0 || checker < count)
		return (0);
	return (count);
}