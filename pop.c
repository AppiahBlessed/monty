#include "monty.h"
/**
 *pop - Delete top elemnt
 *@stack: Double pointer to the top of the stack
 *@line_no: Line number of the opcode being executed
 *
 */
void pop(stack_t **stack, unsigned int line_no)
{
	stack_t *current;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_no);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(current);
}
