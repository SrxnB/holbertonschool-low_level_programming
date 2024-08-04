#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_to - a function that copies the content of a file
 * @file_to: a file copy to
 * @file_from: a file for copy from
 * Return: o
 */

int copy_to(char *file_to, char *file_from)
{
	char *buffer;
	int of, ot, r, w, c, ct;

	of = open(file_from, O_RDONLY);
	if (of < 0)
		return (98);

	ot = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ot < 0)
		return (99);
	buffer = malloc(sizeof(char) * 1024);
	r = read(of, buffer, 1024);
	if (r < 0)
		return (98);

	while (r > 0)
	{
		w = write(ot, buffer, r);
		if (w < 0)
			return (99);
		r = read(of, buffer, 1024);
		if (r < 0)
			return (98);
	}
	c = close(of);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
		return (100);
	}
	ct = close(ot);
	if (ct < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ct);
		return (100);
	}

	return (0);
}


/**
 * main - main function
 * @argc: is a count of argument
 * @argv: is a vector of arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	x = copy_to(argv[2], argv[1]);

	switch (x)
	{
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		case (100):
			exit(100);
		default:
			return (0);
	}
}
