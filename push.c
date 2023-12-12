#include "monty.h"
/**
 * push - adds to the stack
 * @value: value to be added
 */
#define STACK_SIZE 100
extern int top;
extern int stack[];

void push(int value)
{
	int top = 0;

	/*checks if stack is full*/
	if (top == STACK_SIZE)
	{
		fprintf(stderr, "Overflow\n");
		exit(EXIT_FAILURE);
	}
	/*increment to top and adds the value*/
	stack[++top] = value;
}
