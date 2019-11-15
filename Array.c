#include <stdio.h>
#include <string.h>

//Array

/* Define array */

int numbers[10]; //Hold 10 memory slots
//Assigns value in the array slot

    /* populate the array */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
// Multiple Dimensional Array - Type name[size1][size2]...[sizeN]
int board[3][3];
//or
//1 Row 5 columns
char vowels[1][5] = {
    {'a','e','c','d','b'}
};
//Think it as X and Y when try to access to it
/*

   Y Y Y
x: 0 1 2 | 3x3    
x: 1 1 2 |
x: 2 1 2 |
--------------
type name[x][y]
*/

//Computer Automatically know it a two dimensional array but requires Y value
// Row is optional
char vowels[][5] = {
    {'A', 'E', 'I', 'O', 'U'},
    {'a', 'e', 'i', 'o', 'u'}
    };


// print

//Calculate memory limitation of the array

int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int a[3][4] = {
    {0, 1, 2, 3},  /*  initializers for row indexed by 0 */
    {4, 5, 6, 7},  /*  initializers for row indexed by 1 */
    {8, 9, 10, 11} /*  initializers for row indexed by 2 */
};

/*C is a unique language, the reason why this work because C let programmer do whatever
they want as long as the programmer not exceed the limit byte stored within each language

Calculation to dertemine limitation

(x*y) * num of byte of type = total bytes allow to use

Example above 
x = 3, y = 4  so 3 * 4 = 12 
type is int which = 4 bytes 
so 12 * 4 = 48 bytes
Maximum is 48 bytes and each time create a new value within the array, it removes 4 bytes out of from it

IT RAISES BUG: TOO MANY INITIALIZE
*/

/* Trick to loop through an Array

Total Byte      Byte of a row
sizeof(name) / sizeof(name[row]) = num of row

Byte of Row         Byte of a type
sizeof(name[row]) / sizeof(type) = num of column



*/