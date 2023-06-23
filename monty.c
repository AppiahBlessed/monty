#include "monty.h"
/**
 *main - Main entry point for program
 *@argc: The number of arguements
 *@argv: A list of arguements
 *Return: Returns 1
 */
int main(int argc, char **argv)
{
	char codes[150], *opcode, *arguement;
	int num, line_no = 1;
	FILE *file;
	stack_t *stack = NULL;

	if (argc != 2)
		print_usage_error();
	file = open_file(argv[1]);
	while (fgets(codes, sizeof(codes), file) != NULL)
	{
		opcode = strtok(codes, " \t\n");
		arguement = strtok(NULL, " \t\n");
		if (opcode == NULL)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			if (arguement == NULL)
				print_push_error(line_no, file);
			num = atoi(arguement);
			push(&stack, num);
		}
		else if (strcmp(opcode, "pall") == 0)/*Print stack element*/
			pall(&stack);
		else if (strcmp(opcode, "pint") == 0)/*Prints top value*/
			pint(&stack, line_no);
		else if (strcmp(opcode, "pop") == 0)/*Delete top element*/
			pop(&stack, line_no);
		else if (strcmp(opcode, "swap") == 0)/*Swap top two element*/
			swap(&stack, line_no);
		else if (strcmp(opcode, "add") == 0)/*Add top two elements*/
			add(&stack, line_no);
		else
		{
			print_u_error(line_no, opcode, file);
		}
		line_no++;
	}
	fclose(file);
	return (1);
}
