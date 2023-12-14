#include "monty.h"
/**
 * mod - omputes the rest of the division of the second top
 * @stack: is the stack to check
 * @line_number: is the line number
 */
void mod(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
unsigned int l = 0, x;
temp = *stack;
while (temp)
{
temp = temp->next;
l++;
}
if (l < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
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
x = temp->next->n % temp->n;
temp->next->n = x;
*stack = temp->next;
free(temp);
}
