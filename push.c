#include "monty.h"
/**
 * push - adds to the stack
 * @line_num: line number
 * @value: value
 * @stack: stack
 */
void push(stack_t **stack, int line_num, const char *token)
{
	int value;
	char *end;

	stack_t *new = malloc(sizeof(stack_t));

	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		free(new);
		exit(EXIT_FAILURE);
	}
	value = strtol(token, &end, 10);
	if (*end != '\0' && !isspace((unsigned char)*end))
	{
		fprintf(stderr, "L%d: invalid integer argument for push\n", line_num);
		free(new);
		exit(EXIT_FAILURE);
	}
	if (new == NULL)
		exit(EXIT_FAILURE);

	new->n = value;
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;

	*stack = new;
}
