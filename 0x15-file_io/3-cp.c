#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
*error - ....
*@ind: ....
*@av: ....
*Return: nothing
*/
void error(int ind, char **av)
{
	switch (ind)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			exit(99);
	}
}
/**
 * main - check the code
 * @ac: arguments count
 * @av: arguments vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int x, y;
	ssize_t rd, wr, clx, cly;
	char buf[1024];

	if (ac != 3)
		error(97, av);
	x = open(av[1], O_RDONLY);
	rd = read(x, buf, 1024);
	y = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (x == -1 || rd == -1)
			error(98, av);
		wr = write(y, buf, rd);
		if (y == -1 || wr == -1)
			error(99, av);
		rd = read(x, buf, 1024);
		y = open(av[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	clx = close(x);
	if (clx < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
	cly = close(y);
	if (cly < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
		exit(100);
	}
	return (0);
}
