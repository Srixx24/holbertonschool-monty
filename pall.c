#include "monty.h"
/**
 * pall - prints the stack 
 */
extern int stack[];

void pall(void)
{
	int x = 0;
	int stack[20];

	/*starts at top of stack*/
	for (; x >= 0; x--)
	{
		/*prints each value*/
		fprintf(stderr, "%d\n", stack[x]);
	}
}
