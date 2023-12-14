#include "monty.h"
var_t var = {NULL, NULL, NULL, 0};
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
FILE *f;
char *buff;
size_t l = 0;
ssize_t re_line = 1;
unsigned int line_number = 0;
stack_t *stack = NULL;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
f = fopen(argv[1], "r");
var.f = f;
if (!f)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (re_line > 0)
{
buff = NULL;
re_line = getline(&buff, &l, f);
var.buff = buff;
line_number++;
if (re_line > 0)
{
execute(buff, &stack, line_number, f);
}
free(buff);
}
free_stack(stack);
fclose(f);
return (0);
}
