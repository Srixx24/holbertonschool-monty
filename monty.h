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

void push(int line_num, const char *line);

void pall(void);

void pint(int line_num);

void pop(int line_num);

void swap(int line_num);

void add(int line_num);

void nop(void);

void boop(int hi);
#endif
