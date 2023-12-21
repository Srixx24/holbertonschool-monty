#include "monty.h"
/**
 * executeline - process lines
 * @line: input line
 * @line_num: line number
 * @stack: stack
 */
void executeline(const char *line, int line_num, stack_t **stack)
{
	char opcode[MAX_OPCODE_LENGTH];
	char *copy = strdup(line);
	char *token = strtok(copy, " \t\n");
	int value;
	char *end;

	opcode[MAX_OPCODE_LENGTH - 1] = '\0';

	if (token == NULL)
		return;
	strncpy(opcode, token, MAX_OPCODE_LENGTH);
	while (token != NULL)
	{

		if (strcmp(opcode, "push") == 0)
		{
			value = strtol(token, &end, 10);
			push(stack, line_num, value);
		}
		else if (strcmp(opcode, "pall") == 0)
			pall(stack);
		/*else if (strcmp(opcode, "pint") == 0)
			pint(stack, line_num);
		else if (strcmp(opcode, "pop") == 0)
			pop(stack, line_num);
		else if (strcmp(opcode, "swap") == 0)
			swap(stack, line_num);
		else if (strcmp(opcode, "add") == 0)
			add(stack, line_num);
		else if (strcmp(opcode, "nop") == 0)
			nop();*/
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
			free(copy);
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " \t\n");
	}
	free(copy);
}
