#include "monty.h"

/**
 * div - to divide the second top element by the top element of the stack
 * @stack: is the stack to check
 * @line_number: is the line number
 */

void divide(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int l = 0, x;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		l++;
	}

	if (l < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(var.f);
		free(var.buff);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(var.f);
		free(var.buff);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	x = temp->next->n / temp->n;
	temp->next->n = x;
	*stack = temp->next;
	free(temp);
}
