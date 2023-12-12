#include "monty.h"
void process_file(const char *filename);
int top = 0;
int stack[STACK_SIZE];
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
	char *line = NULL;
	int line_num = 1;
	size_t line_len = 0;
	ssize_t read;

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &line_len, file)) != -1)
	{
		line[strcspn(line, "\n")] = '\0'; /*remove newline character*/
		executeline(line, line_num); /*jump to execute instructions*/

		line_num++;
	}

	free(line);
	fclose(file); /*close file*/
}
