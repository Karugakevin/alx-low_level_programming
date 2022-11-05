#include "main.h"

/**
 * read_textfile - function that reads a text file
 *                 and prints it to the POSIX standard output.
 * @filename: pointer to the name of the file
 * @letters: number of characters to be read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, wrt;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(op, buff, letters);
	wrt = write(STDOUT_FILENO, buff, r);

	if (op == -1 || r == -1 || wrt == -1 || wrt != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wrt);
}
