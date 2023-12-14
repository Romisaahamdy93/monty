#include "monty.h"
/**
 * free_stack - to free
 * @stack: is the stack to check
 * Return: void
 */
void free_stack(stack_t *stack)
{
stack_t *x;
x = stack;
while (stack)
{
x = stack->next;
free(stack);
stack = x;
}
}
