#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
*error - ....
*@ind: ....
*@argv: ....
*@buf: ....
*Return: nothing
*/
void error(int ind, char **argv, char *buf)
{
	switch (ind)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buf);
			exit(99);
			break;
	}
}
/**
 * main - check the code
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int x, y;
	ssize_t rd, wr, clx, cly;
	char *buf;

	buf = NULL;
	if (argc != 3)
		error(97, argv, buf);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	x = open(argv[1], O_RDONLY);
	rd = read(x, buf, 1024);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (x == -1 || rd == -1)
			error(98, argv, buf);
		wr = write(y, buf, rd);
		if (y == -1 || wr == -1)
			error(99, argv, buf);
		rd = read(x, buf, 1024);
		y = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buf);
	clx = close(x);
	if (clx == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
	cly = close(y);
	if (cly == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
		exit(100);
	}
	return (0);
}
