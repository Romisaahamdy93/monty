#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: is the stack to check
 * @line_number: is the line number
 */
void add(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
unsigned int x, l = 0;
temp = *stack;
while (temp)
{
temp = temp->next;
l++;
}
if (l < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
fclose(var.f);
free(var.buff);
free_stack(*stack);
exit(EXIT_FAILURE);
}
temp = *stack;
x = temp->n + temp->next->n;
temp->next->n = x;
*stack = temp->next;
free(temp);
}
