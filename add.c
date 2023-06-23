#include "monty.h"
/**
 *add - Adds the top two elements
 *@stack: Strct defined
 *@line_no: Line the code is running
 *
 *
 */
void add(stack_t **stack, unsigned int line_no)
{
	stack_t *move, *temp = *stack;
	stack_t *current = *stack;
	unsigned int result, lenght = 0;

	while (current != NULL)
	{
		lenght++;
		current = current->next;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_no);
		exit(EXIT_FAILURE);
	}
	move = temp->next;
	result = temp->n + move->n;
	*stack = move;
	move->prev = NULL;
	(*stack)->n = result;
}
