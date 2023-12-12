#include "monty.h"

void execute_instr(const char *opcode, int line_num)
{
	int value;

	if (strcmp(opcode, "push") == 0)
	{
		if (scanf("%d", &value) != 1)
		{
			fprintf(stderr, "Invaid\n");
			exit(EXIT_FAILURE);
		}
		push(value, &value);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall();
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
		exit(EXIT_FAILURE);
	}
}
