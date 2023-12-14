#include "monty.h"

/**
 * push - to push an elemnt to the stack
 * @stack: is the stack to check
 * @line_number: is the line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	int a, b = 0, new = 0;

	if (var.arg)
	{
		if (var.arg[0] == '-')
			b++;
		for (; var.arg[b] != '\0'; b++)
		{
			if (var.arg[b] > 57 || var.arg[b] < 48)
				new = 1;
		}

		if (new == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(var.f);
			free(var.buff);
			free_stack(*stack);
			exit(EXIT_FAILURE);
		}
	}

	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(var.f);
		free(var.buff);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	a = atoi(var.arg);
	if (var.lifi == 0)
		add_node(stack, a);
}
