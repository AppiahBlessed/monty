#include "monty.h"
/**
 *print_usage_error - Error message for wrong usage of monty
 *
 */
void print_usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 *print_u_error - As the name suggests
 *@line_no: Line code is running in time
 *@opcode: Operation intruction codes
 *@file: File
 */
void print_u_error(int line_no, const char *opcode, FILE *file)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line_no, opcode);
	fclose(file);
	exit(EXIT_FAILURE);
}

/**
 *print_push_error - As the name suggests
 *@line_no: Line code is running in time
 *@file: File
 */
void print_push_error(unsigned int line_no, FILE *file)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_no);
	fclose(file);
	exit(EXIT_FAILURE);
}

