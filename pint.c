#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 */
void pint(int line_num)
{
	if (top == -1)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack[top]);
}
