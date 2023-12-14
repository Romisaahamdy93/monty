#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: is the stack to check
 * @line_number: is the line number
 */
void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *temp = *stack, *x;
(void) line_number;
if (*stack == NULL || (*stack)->next == NULL)
{
return;
}
x = (*stack)->next;
x->prev = NULL;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = *stack;
(*stack)->next = NULL;
(*stack)->prev = temp;
(*stack) = x;
}
