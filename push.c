#include "monty.h"
/**
 * push - adds to the stack
 * @value: value to be added
 */
void push(int value, int line_num, const char *line)
{

	/*checks if stack is full*/
	if (top == STACK_SIZE)
	{
		fprintf(stderr, "L%d: Overflow\n", line_num);
		exit(EXIT_FAILURE);
	}
	if (value == 0 && line[4] != '0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	/*increment to top and adds the value*/
	stack[++top] = value;
}
