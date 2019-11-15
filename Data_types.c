//Integers - whole numbers which can be either positive or negative. Defined using char, int, short, long or long long
//memory 
char grade_letter = 'A'; // 1 byte
int grade = 10; // 4 bytes
short small_num = 32767; //2 bytes 
long regular_num = 32321312; // 4 bytes
long long big_num = 32178932917321; //8 bytes

float Decimal = 3.2;                        // 4 bytes
double big_number_fraction = 3.83728973892; //8 bytes

//**NOTE C DOES NOT OFFERS BOOLEAN

//Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
unsigned char grade_letter = 'A';            // 1 byte
unsigned int grade = 10;                      // 4 bytes
unsigned short small_num = 32767;              //2 bytes
unsigned long regular_num = 32321312;           // 4 bytes
unsigned long long big_num = 32178932917321;     //8 bytes

//Note that C does not have a boolean type. Usually, it is defined using the following notation:

#define BOOL char
#define FALSE 0
#define TRUE 1
