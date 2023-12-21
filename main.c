#include "monty.h"
void process_file(const char *filename);
int top = 0;
int stack[STACK_SIZE];
#define MAX_LINE_LENGTH 1200
/**
 * main - entry point for program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	process_file(filename);

	return (0);
}
/**
 * process_file - process the contents of file
 * @filename: name of the file to process
 */
void process_file(const char *filename)
{
	FILE *file = fopen(filename, "r");
	char line[MAX_LINE_LENGTH];
	int line_num = 1;
	stack_t *stack = NULL;

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
		executeline(line, line_num, &stack); /*jump to execute function*/

		line_num++;
	}

	fclose(file); /*close file*/
}
