#include "monty.h"
/**
 * push - adds to the stack
 * @line_num: line number
 * @line: line
 */
void push(stack_t *stack, int line_num, int *value)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (value == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	if (new == NULL)
		exit(EXIT_FAILURE);

	new->n = *value;
	new->prev = NULL;
	new->next = stack;

	if (stack != NULL)
		(stack)->prev = new;

	stack = new;
}
