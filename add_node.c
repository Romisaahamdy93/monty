#include "monty.h"
/**
 * add_node - add node to the stack
 * @stack: is the stack to check
 * @a: new node
 */
void add_node(stack_t **stack, int a)
{
stack_t *new, *x;
x = *stack;
new = malloc(sizeof(stack_t));
if (new == NULL)
{
printf("Error: malloc failed\n");
exit(0);
}
if (x)
x->prev = new;
new->n = a;
new->next = *stack;
new->prev = NULL;
*stack = new;
}
