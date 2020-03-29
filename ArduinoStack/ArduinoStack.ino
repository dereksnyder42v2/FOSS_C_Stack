/* Arduino sketch to test functionality of Stack data structure
 * implementation. 
 *
 * This code is rightfully FREE and OPEN SOURCE SOFTWARE,
 * an original and uninspired ground-up implementation by 
 * the author, and may be distributed and modified per the 
 * terms of the attached software licensing agreement.
 * 
 * Sun Mar 29 15:22:58 MDT 2020
 * dereksnyder42v2 on github 
 */

#include "stack.h"
#define TEST

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
	Serial.begin(9600);
	Serial.println("Starting test.");

  #ifdef TEST
	stack_t stk;
  int fl = 0;
  stack_init(&stk, 20, &fl);
  
	char str[] = "hello world!\0";
	char *strp;

	Serial.print("Expect:\thello world!\nOutput:\t");
	Serial.println(str);

	for (strp = str; *strp != '\0'; strp++ )
	{
		stack_push(&stk, *strp, &fl);
	}

	Serial.print("Expect:\t!dlrow olleh\nOutput:\t");
	while (!stack_is_empty(&stk, &fl))
	{
		Serial.print(stack_pop(&stk, &fl));
	}
	Serial.println();
	
	//stack_del(&stk, &fl);
  #endif
  Serial.println("Test completed. How does the output look?");
  delay(1000);
  pinMode(LED_BUILTIN, LOW);
}

void loop()
{
	;
}
