#include "monty.h"

void executeline(const char *opcode, int line_num)
{
	int value;

	if (sscanf(opcode, "push %d", &value) == 1)
	{
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
