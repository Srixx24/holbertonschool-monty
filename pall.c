#include "monty.h"
/**
 * pall - prints the stack
 */
void pall(void)
{
	int x;

	if (top == 0)
		return;
	/*starts at top of stack*/
	for (x = top - 1; x >= 0; x--)
	{
		/*prints each value*/
		fprintf(stdout, "%d\n", stack[x]);
	}
}
