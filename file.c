#include "monty.h"
/**
 *open_file - Checks whether a file is a accessible
 *@filename: File name
 *Return: Returns file
 *
 */
FILE *open_file(const char *filename)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	return (file);
}
