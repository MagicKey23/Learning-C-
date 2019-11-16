//Defining strings
//use pointers to a character array to define simple strings,
char *name = "John Smith"; //this method creates a string which we can only use for reading.

//define a string which can be manipulated 
char name[] = "John Smith";

char name[] = "John Smith";
/* is the same as */
char name[11] = "John Smith"; //11 because of String termination at the end

//string termination: a special character (equal to 0) which indicates the end of the string.

//String Length
//The function 'strlen' returns the length of the string which has to be passed as an argument:

char *name = "Nikhil";
printf("%d\n", strlen(name));

//String comparison

// strncmp compares between two strings, returning the number 0 if they are equal,
//The arguments are the two strings to be compared, and the maximum comparison length.
char *name = "John";

if (strncmp(name, "John", 4) == 0)
{
    printf("Hello, John!\n");
}
else
{
    printf("You are not John. Go away.\n");
}

//String Concatenation

//The function 'strncat' appends first n characters of src string to the destination string where n is min(n,length(src));

char dest[20] = "Hello";
char src[20] = "World";
strncat(dest, src, 3);
printf("%s\n", dest);
strncat(dest, src, 20);
printf("%s\n", dest);