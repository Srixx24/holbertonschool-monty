#include "monty.h"
/**
 * pall - prints the stack
 */
void pall(stack_t **stack)
{
	const stack_t *cur = *stack;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
	}
}
