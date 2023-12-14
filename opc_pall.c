#include "monty.h"
/**
 * pall - prints all the values on the stack
 * @stack: the stack to check
 * @line_number: is the line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *pr = NULL;
(void) line_number;
if (*stack)
{
pr = *stack;
if (pr == NULL)
return;
while (pr != NULL)
{
printf("%d\n" pr->n);
pr = pr->next;
}
}
}
