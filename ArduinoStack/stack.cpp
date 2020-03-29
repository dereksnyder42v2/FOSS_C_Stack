
#include <stdlib.h>
#include "stack.h"
/* sed this in for Arduino, and rename the file to .cpp extension */
#include "Arduino.h"

void stack_init(stack_t *stack_p, int max_size, int *flag)
{
	stack_p->data = (el_t *)malloc((sizeof(el_t) * max_size));
	stack_p->head = -1;
	stack_p->max_size = max_size;
	stack_p->sz = 0;

	flag = 0;
}

void stack_del(stack_t *stack_p, int *flag)
{
	free(stack_p->data);
	; // TODO what else do you need to do? 

	flag = 0;
}

void stack_push(stack_t *stack_p, el_t val, int *flag)
{
	stack_p->head ++;
	stack_p->data[stack_p->head] = val;
	
	stack_p->sz ++;

	flag = 0;
}

el_t stack_peek(stack_t *stack_p, int *flag)
{
	el_t val = stack_p->data[stack_p->head];	
		
	flag = 0;

	return val;
}

el_t stack_pop(stack_t *stack_p, int *flag)
{
	el_t val = stack_p->data[stack_p->head];
	stack_p->head --;

	stack_p->sz --;

	flag = 0;

	return val;
}

int stack_size(stack_t *stack_p, int *flag)
{
	flag = 0;
	
	return stack_p->sz;
}

int stack_is_full(stack_t *stack_p, int *flag)
{
	flag = 0;
	
	return (stack_p->sz >= stack_p->max_size);
}

int stack_is_empty(stack_t *stack_p, int *flag)
{
	flag = 0;
	
	return (stack_p->sz == 0);
}
