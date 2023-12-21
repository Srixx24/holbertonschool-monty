#ifndef HEAD_
#define HEAD_
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#define MAX_OPCODE_LENGTH 5
#define STACK_SIZE 100

void executeline(const char *opcode, int line_num, stack_t **stack);

void process_file(const char *filename);

void push(stack_t *stack, int line_num, int *value);

void pall(stack_t **stack);

void pint(stack_t **stack, unsigned int line_num);

void pop(stack_t **stack, unsigned int line_num);

void swap(stack_t **stack, unsigned int line_num);

void add(stack_t **stack, unsigned int line_num);

void nop(void);

#endif
