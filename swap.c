#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @line_num: line number
 */
void swap(int line_num)
{
	int temp = stack[top];

	if (top < 1)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_num);
		exit(EXIT_FAILURE);
	}
	stack[top] = stack[top - 1];
	stack[top - 1] = temp;
}
