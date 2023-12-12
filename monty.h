#ifndef HEAD_
#define HEAD_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_OPCODE_LENGTH 5
#define STACK_SIZE 100

void execute_instr(const char *opcode, int line_num);

void process_file(const char *filename);

void push(int value, int *stack);

void pall(void);

void pint(void);

void pop(void);

void swap(void);

void add(void);

void nop(void);

#endif
