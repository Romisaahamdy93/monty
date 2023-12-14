#include "monty.h"
/**
 * sub - to subtract the top element from the second top element of the stack
 * @stack: is the stack
 * @line_number: is the line number
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *x;
	int s, l;

	x = *stack;
	for (l = 0; x != NULL; l++)
		x = x->next;

	if (l < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(var.f);
		free(var.buff);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	x = *stack;
	s = x->next->n - x->n;
	x->next->n = s;
	*stack = x->next;
	free(x);
}
