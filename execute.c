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

	while (isspace(*line))
		line++;
	/*skiping blank line*/
	if (*line == '\0')
		return;
	token = strtok((char *) line, " \t\n");
	if (token == NULL)
		exit(EXIT_FAILURE);
	strcpy(opcode, token);
	/*check for push command*/
	if (strcmp(opcode, "push") == 0)
	{
		token = strtok(NULL, " \t\n");
		if (token == NULL || !isdigit(*token))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			exit(EXIT_FAILURE);
		}
		value = atoi(token);
		push(value, line_num, opcode);
	}
	else if (strcmp(opcode, "pall") == 0)
		pall();
	else if (strcmp(opcode, "pint") == 0)
		pint(line_num);
	else if (strcmp(opcode, "pop") == 0)
		pint(line_num);
	else if (strcmp(opcode, "swap") == 0)
		swap(line_num);
	else if (strcmp(opcode, "add") == 0)
		add(line_num);
	else if (strcmp(opcode, "nop") == 0)
		nop();
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
		exit(EXIT_FAILURE);
	}
}
