
//#include <stdlib.h> // TODO what are needed libraries?

#ifndef STACK_H 
#define STACK_H

/* sed this line out in Arduino */
#include "Arduino.h"

/* el_t: type of element contained in stack
 */
#define STACKTYPE_CHAR

#ifdef STACKTYPE_CHAR
	typedef char el_t;
#elif defined(TYPE_INT)
	typedef int el_t;
#elif defined(TYPE_FLOAT)
	typedef float el_t;
#endif

typedef struct {
	el_t *data;
	int sz; // "size" exists in Arduino std namespace, but not in Unix C
	int max_size;
	int head;
} stack_t;

/* 
 * WHY ARE THERE int *flags everywhere??
 * the int passed in will represent errors caught during processing.
 * 0:	no errors
 * 1:	stack is empty
 * 2: 	stack is full
 * 
 */

/* 
 * USAGE:
 * stack_init(&stack_p, 10, &flag);
 */
void stack_init(stack_t *stack_p, int sz, int *flag);

/* 
 * USAGE:
 * stack_del(&stack_p, &flag);
 */
void stack_del(stack_t *stack_p, int *flag);

/* 
 * USAGE:
 * stack_push(&stack_p, 1, &flag);
 */
void stack_push(stack_t *stack_p, el_t val, int *flag);

/* 
 * USAGE:
 * el_t val = stack_peek(&stack_p, &flag);
 */
el_t stack_peek(stack_t *stack_p, int *flag);

/* 
 * USAGE:
 * el_t val = stack_pop(&stack_p, &flag);
 */
el_t stack_pop(stack_t *stack_p, int *flag);

/* 
 * USAGE:
 * int size = stack_size(&stack_p, &flag);
 */
int stack_size(stack_t *stack_p, int *flag);

/* 
 * USAGE:
 * int full = stack_is_full(&stack_p, &flag);
 */
int stack_is_full(stack_t *stack_p, int *flag);

/* 
 * USAGE:
 * int empty = stack_is_empty(&stack_p, &flag);
 */
int stack_is_empty(stack_t *stack_p, int *flag);

#endif
