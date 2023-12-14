#include "monty.h"
/**
 * rotr -  rotates the stack to the bottom
 * @stack: is the stack to check
 * @line_number: is the line number
 */
void rotr(stack_t **stack, unsigned int line_number)
{
(void) line_number;
stack_t *temp;
temp = *stack;
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
