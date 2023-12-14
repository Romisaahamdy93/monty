#include "monty.h"
/**
 * pall - prints all the values on the stack
 * @stack: the stack to check
 * @line_number: is the line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
(void) line_number;
if (*stack)
temp = *stack;
if (temp == NULL)
return;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}

