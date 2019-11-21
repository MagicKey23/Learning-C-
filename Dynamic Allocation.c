// Dynamic Allocation
/* 
 It allows building complex data structures such as linked lists.
 Allocating memory dynamically helps us to store data without initially knowing the size of the data in the time we wrote the program.
 To allocate a chunk of memory dynamically, we have to have a pointer ready to store the location of the newly allocated memory.

*/

typedef struct
{
    char *name;
    int age;
} person;

person * myperson = malloc(sizeof(person));

//Note that sizeof is not an actual function, because the compiler interprets it and translates it to the actual memory size of the person struct.

//Assign value by using the pointer

myperson->name = "John";
myperson->age = 13;

//Release data 
free(myperson);

/*
Note that the free does not delete the myperson variable itself
The myperson variable will still point to somewhere in the memory - but after calling myperson we are not allowed to access that area anymore. 

 */