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
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to file %s", av[2]);
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
	x = open(av[1], O_RDONLY | O_DSYNC);
	if (x < 0)
		error(98, av);
	y = open(av[2], O_WRONLY | O_CREAT | O_DSYNC | O_TRUNC, 0664);
	if (y < 0)
		error(99, av);
	rd = 1;
	while (rd)
	{
		rd = read(x, buf, 1024);
		if (rd < 0)
			error(98, av);
		if (rd == 0)
			break;
		y = open(ac[2], O_WRONLY | O_APPEND);
			if (y < 0)
				error(99, av);
		wr = write(y, buf, rd);
		if (wr < 0)
		error(99, av);
	}
	clx = close(x);
	if (clx < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", x);
		exit(100);
	}
	cly = close(y);
	if (cly < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", y);
		exit(100);
	}
	return (0);
}
