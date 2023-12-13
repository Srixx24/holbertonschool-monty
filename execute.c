#include "monty.h"
/**
 * executeline - process lines
 * @line: input line
 * @line_num: line number
 */
void executeline(const char *line, int line_num)
{
	int value;
	char opcode[4000];
	char *token;

	/*skiping blank line*/
	if (sscanf(line, "%3999s", opcode) != 1)
		return;
	/*check for push command*/
	if (sscanf(opcode, "push") == 0)
	{
		token = strtok((char *) line, " \t\n");
		token = strtok(NULL, " \t\n");
		if (token == NULL)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			exit(EXIT_FAILURE);
		}
		value = atoi(token);
		push(value, line_num, opcode);
	}
	else if (strcmp(opcode, "pall") == 0)
		pall();
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
		exit(EXIT_FAILURE);
	}
}
