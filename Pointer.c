//Pointers
// Pointers are used for several reasons, such as:
/*
Strings
Dynamic memory allocation
Sending function arguments by reference
Building complicated data structures
Pointing to functions
Building special data structures (i.e. Tree, Tries, etc...)
*/

//What is a pointer?

/*A pointer is essentially a simple integer variable which holds a memory address that points to a value, instead of holding the actual value itself.*/

//Strings as pointers

//The following line:

char *name = "John";
/* Does three things
// It allocates a local(stack) variable called name, which is a pointer to a single character.
// It causes the string "John" to appear somewhere in the program memory(after it is compiled and executed, of course).
// It initializes the name argument to point to where the J character resides at(which is followed by the rest of the string in the memory).
*/

//Dereferencing Operator
/*
Dereferencing is the act of referring to where the pointer points, instead of the memory address. 
Dereferencing a pointer is done using the asterisk operator *.
*/

//If we want to create an array that will point to a different variable in our stack, we can write the following code:


/* define a local variable a */
int a = 1;

/* define a pointer variable, and point it to a using the & operator */
//& is unary poperator 
int *pointer_to_a = &a;

printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);

//----------
int a = 1;

int *pointer_to_a = &a;

/* let's change the variable a */
a += 1;

/* we just changed the variable again! */
*pointer_to_a += 1;

/* will print out 3 */
printf("The value of a is now %d\n", a);


