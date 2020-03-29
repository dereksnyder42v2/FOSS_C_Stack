# c_stack
Implementation of a stack data structure in C/C++ (it should compile with minimal effort in both) 
     
Details on the "Arduino" folder...
- stack.ino is a simple test program that pushes a string onto the stack, and prints the string out in reversed order.    
- stack.cpp is the implementation of the data structure    
- stack.h is the header file containing method definitions; *this is also where you specify what data type the stack elements are {char, int, float, etc.}*        
		    
Simply copy all those files into your sketch folder and make sure you have #include "stack.h" towards the top of your sketch!    
			    
FUTURE WORK:    
Attempt some error handling in the Arduino version, maybe passing error flags around?    

