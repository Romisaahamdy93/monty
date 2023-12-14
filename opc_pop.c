#include "monty.h"
/**
 * pop - removes the top element of the stack.
 * @stack: is the stack to check
 * @line_number: is the line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(var.f);
free(var.buff);
free_stack(*stack);
exit(EXIT_FAILURE);
}
temp = *stack;
*stack = temp->next;
free(temp);
}
