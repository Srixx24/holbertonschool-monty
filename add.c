#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @line_num: line number
 */
void add(int line_num)
{
	if (top < 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_num);
		exit(EXIT_FAILURE);
	}

	stack[top - 1] += stack[top];
	top--;
}
