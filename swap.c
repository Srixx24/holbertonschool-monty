#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @line_num: line number
 */
void swap(stack_t **stack, unsigned int line_num)
{
	int temp = (*stack)->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
