#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @line_num: line number
 */
void pop(int line_num)
{
	if (top == -1)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}
	top--;
}
