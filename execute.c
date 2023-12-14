#include "monty.h"

/**
 * execute - To execute the opc
 * @stack: is the stack to check
 * @line_number: is the line number
 * @f: is the monty file
 * @buff: is the element
 * Return: nothing
 */

int execute(char *buff, stack_t **stack, unsigned int line_number, FILE *f)
{
	instruction_t opc[] = {
		{ "push", push },
		{ "pall", pall },
		{ "pint", pint },
		{ "pop", pop },
		{ "swap", swap },
		{ "add", add },
		{ "nop", nop },
		{ "sub", sub },
		{ "div", divide },
		{ "mul", mul },
		{ "mod", mod },
		{ "pchar", pchar },
		{ "pstr", pstr },
		{ "rotl", rotl },
		{ "rotr", rotr },
		{ NULL, NULL}
	};

	unsigned int i = 0;
	char *op;

	op = strtok(buff, " \n\t");
	if (op && op[0] == '#')
		return (0);
	var.arg = strtok(NULL, " \n\t");
	while (opc[i].opcode && op)
	{
		if (strcmp(op, opc[i].opcode) == 0)
		{
			opc[i].f(stack, line_number);
			return (0); }
		i++;
	}
	if (op && opc[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
		fclose(f);
		free(buff);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1); }
