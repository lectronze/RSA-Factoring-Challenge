#include "rsa_factor.h"

/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buff = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (!fptr)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
	}
	while ((line = getline(&buff, &count, fptr)) != -1)
	{
		factorize(buff);
	}
	return (0);
}
