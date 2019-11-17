/* FUNCTION */
#include <stdio.h>

//C functions are simple, but because of how C works, the power of functions is a bit limited.

/*
Functions receive either a fixed or variable amount of arguments.
Functions can only return one value, or return no value.
 */

int power(int n, int exponent){
    
    //base case 
    if (exponent == 1){
        return n;
    };
   return n * power(n,  exponent-1); //inductive steps
}

int swap(int *ptr_x, int *ptr_y)
{
    int previous_value = *ptr_y;
    *ptr_y = *ptr_x;
    *ptr_x = previous_value;
}

int main(void){
    int n, exponent;
    printf("enter a number\n");
    scanf("%d", &n); 
    printf("raise the power of?\n");
    scanf("%d", &exponent);
    int result = power(n, exponent);
    printf("the result is : %d \n", result);
    int  x = 2;
    int  y = 3;
    swap(&x, &y);
    printf("x: %d, y: %d \n",x, y);
}
