#include "monty.h"
/**
 *pint - Prints stack elements
 *@stack: Double pointer to the top of the stack
 *@line_no: Line number of the opcode being executed
 *
 *
 */
void pint(stack_t **stack, unsigned int line_no)
{
	stack_t *current;


	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
}
