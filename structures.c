//C structures are special, large variables which contain several named variables inside.
/* Structures are used for:
-Serialization of data
-Passing multiple arguments in and out of functions through a single argument
-Data structures such as linked lists, binary trees, and more
*/
//Example of Structure
struct point
{
    int x;
    int y;
};

///* draws a point at 10, 5 */
struct point p;
p.x = 10;
p.y = 5;
draw(p);

//To access the point's variables, we use the dot . operator.

//Compare to:

/* draws a point at 10, 5 */
int x = 10;
int y = 5;
draw(x, y);

// Typedefs
//Typedefs allow us to define types with a different name - which can come in handy when dealing with structs and pointer

typedef struct
{
    int x;
    int y;
} point;

point p;

typedef struct
{
    char *brand;
    int model;
} vehicle;

vehicle mycar;
mycar.brand = "Ford";
mycar.model = 2007;