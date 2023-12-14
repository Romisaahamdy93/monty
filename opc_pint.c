#include "monty.h"

/**
 * pint - to print the value at the top of the stack
 * @stack: is the stack to check
 * @line_number: is the line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(var.f);
		free(var.buff);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	else
		printf("%d\n", (*stack)->n);
}
