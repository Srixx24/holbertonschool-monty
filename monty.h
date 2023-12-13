#ifndef HEAD_
#define HEAD_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_OPCODE_LENGTH 5
#define STACK_SIZE 100
extern int top;
extern int stack[STACK_SIZE];

void executeline(const char *opcode, int line_num);

void process_file(const char *filename);

void push(int value, int line_num, const char *line);

void pall(void);

void pint(void);

void pop(void);

void swap(void);

void add(void);

void nop(void);

#endif
