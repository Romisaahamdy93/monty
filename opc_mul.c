#include "monty.h"
/**
 * mul - multiplies the second top element of the stack
 * @stack: is the stack to check
 * @line_number: is the line number
 */
void mul(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
unsigned int l = 0, x;
temp = *stack;
while(temp)
{
temp = temp->next;
l++;
}
if (l < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
fclose(var.f);
free(var.buff);
free_stack(*stack);
exit(EXIT_FAILURE);
}
temp = *stack;
x = temp->next->n * temp->n;
temp->next->n = x;
*stack = temp->next;
free(temp);
}
