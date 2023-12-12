#include "monty.h"
/**
 * pall - prints the stack 
 */
extern int stack[];
extern int top;
void pall(void)
{
	int x;

	/*starts at top of stack*/
	for (x = top - 1; x >= 0; x--)
	{
		/*prints each value*/
		fprintf(stderr, "%d\n", stack[x]);
	}
}
