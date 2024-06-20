C - Function Pointers

0. What's my name
Write a function that prints a name.
Prototype: void print_name(char *name, void (*f)(char *));

1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.
Prototype: void array_iterator(int *array, size_t size, void(*action)(int));
 - where size is the size of the array
 - and action is a pointer to the function you need to use

2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.
Prototype: int int_index(int *array, int size, int (*cmp)(int));
 - where size is the number of elements in the array array
 - cmp is a pointer to the function to be used to compare values
 - int_index returns the index of the first element for which the cmp function does not return 0
 - If no element matches, return -1
 - If size <= 0, return -1

3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.
This task requires that you create four different files.
3-calc.h
 - This file should contain all the function prototypes and data structures used by the program. You can use this structure:
3-op_functions.c
This file should contain the 5 following functions (not more):
 - op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
 - op_sub: returns the difference of a and b. 
 Prototype: int op_sub(int a, int b);
 - op_mul: returns the product of a and b. 
 Prototype: int op_mul(int a, int b);
 - op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
 - op_mod: returns the remainder of the division of a by b
 Prototype: int op_mod(int a, int b);
3-get_op_func.c
 - This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.
3-main.c
 - This file should contain your main function only.