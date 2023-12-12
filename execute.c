#include "monty.h"

void executeline(const char *opcode, int line_num)
{
	int value;

	if (strcmp(opcode, "push") == 0)
	{
		if (sscanf(opcode, "push %d", &value) != 1)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
			exit(EXIT_FAILURE);
		}
		else
		push(value);
	}
	else if (strcmp(opcode, "pall") == 0)
		pall();

}
