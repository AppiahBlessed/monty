#include "monty.h"
/**
 *swap - Swaps first two elements
 *@stack: Double pointer to the top of the stack
 *@line_no: Line number of the opcode being executed
 *
 */
void swap(stack_t **stack, unsigned int line_no)
{
	unsigned int lenght = 0;
	stack_t *current = *stack;
	stack_t *next, *temp;

	while (current != NULL)
	{
		lenght++;
		current = current->next;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_no);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	next = temp->next;
	temp->next = next->next;
	temp->prev = next;
	next->prev = NULL;
	next->next = temp;
	*stack = next;
}
