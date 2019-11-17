// STATIC 
//static is a keyword in the C programming language. It can be used with variables and functions.

//Variables can be declared as static to increase their scope up to file containing them. As a result, 
//these variables can be accessed anywhere inside a file.

//STATIC VARIABLE
#include <stdio.h>
int runner()
{
    static int count = 0; // Declared static, this make this variable remains here after return.
    count++;
    return count;
}

int main()
{
    printf("%d ", runner()); // Update 1
    printf("%d ", runner()); // Update 2
    return 0;
}

//STATIC FUNCTION

//By default, functions are global in C.
//. If we declare a function with static, the scope of that function is reduced to the file containing it.

//ONLY THIS FILE HAS THE ACCESS TO THIS FUNCTION
static void fun(void)
{
    printf("I am a static function.");
}

//Static vs Global?
//While static variables have scope over the file containing them making them accessible only inside a given file,
// global variables can be accessed outside the file too.

