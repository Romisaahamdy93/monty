#include "monty.h"
/**
 * rotr -  rotates the stack to the bottom
 * @stack: is the stack to check
 * @line_number: is the line number
 */
void rotr(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
temp = *stack;
(void) line_number;
if (*stack == NULL || (*stack)->next == NULL)
{
return;
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = *stack;
temp->prev->next = NULL;
temp->prev = NULL;
(*stack)->prev = temp;
(*stack) = temp;
}
