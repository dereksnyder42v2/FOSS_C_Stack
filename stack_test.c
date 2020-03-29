
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main() 
{
	int fl;
	stack_t sp;
	printf("Starting test.\n\n");
	
	stack_init(&sp, 10, &fl);

	char val1 = 1, val2 = 2, val3 = 3;

	printf("Pushing value %d onto stack\n", (int)val1);
	stack_push(&sp, val1, &fl);
	printf("Pushing value %d onto stack\n", (int)val2);
	stack_push(&sp, val2, &fl);
	printf("Pushing value %d onto stack\n", (int)val3);
	stack_push(&sp, val3, &fl);
 
 	printf("peek():\texpect %d: %d\n", (int)val3, (int)stack_peek(&sp, &fl));
	printf("pop():\texpect %d: %d\n",  (int)val3, (int)stack_pop(&sp, &fl));
	printf("pop():\texpect %d: %d\n",  (int)val2, (int)stack_pop(&sp, &fl));
	printf("pop():\texpect %d: %d\n",  (int)val1, (int)stack_pop(&sp, &fl));

	stack_del(&sp, &fl);
	printf("\nDone with test.\n");

	return 0;
}
