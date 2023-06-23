#include "monty.h"
/**
 *push - Pushes data on stack
 *@stack: Double pointer to the top of the stack
 *@num: Expected integer argument
 *
 */
void push(stack_t **stack, int num)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newnode->n = num;
	newnode->prev = NULL;
	newnode->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = newnode;
	}
	*stack = newnode;
}
