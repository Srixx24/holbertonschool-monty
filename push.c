#include "monty.h"
/**
 * push - adds to the stack
 * @value: value to be added
 */
void push(int value, int *stack)
{
	int top = -1;

	/*checks if stack is full*/
	if (top == STACK_SIZE - 1)
	{
		fprintf(stderr, "Overflow\n");
		exit(EXIT_FAILURE);
	}
	/*increment to top and adds the value*/
	stack[++top] = value;
}
