#include "monty.h"
/**
 * push - adds to the stack
 * @line_num: line number
 * @line: line
 */
void push(int line_num, const char *line)
{
	char *end;
	int value;

	/*checks if stack is full*/
	if (top == STACK_SIZE)
	{
		fprintf(stderr, "L%d: Overflow\n", line_num);
		exit(EXIT_FAILURE);
	}
	if (line == NULL || strspn(line, " \t\n") == strlen(line))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	value = (int)strtol(line, &end, 10);
	if (*end != '\0' && !isspace(*end))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	/*increment to top and adds the value*/
	stack[++top] = value;
}
