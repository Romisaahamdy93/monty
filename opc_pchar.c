#include "monty.h"

/**
 * pchar - to print the char at the top of the stack
 * @stack: is the stack to check
 * @line_number: is the line number
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(var.f);
		free(var.buff);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(var.f);
		free(var.buff);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}
