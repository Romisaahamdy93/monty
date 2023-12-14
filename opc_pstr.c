#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: is the stack to check
 * @line_number: is the line number
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
