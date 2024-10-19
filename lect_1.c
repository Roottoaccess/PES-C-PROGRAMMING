// Variable in C
/*
int , float , Character, Double.....
range = -2,147,483,648 to 2,147,483,647
 ----> 2^32
unsigned int: 0 to 4,294,967,295

Stores a single character.
size = 1byte
Range: -128 to 127(signed char) or 0 to 255 (unsigned char)
2^7 = 128

Stores single-precesion decimal numbers.
4 bytes.
Up to 6 - 7 digit the decimal point

float price = 19.99

More pricision result

Stores double-precision decimal numbers.
Size: 8bytes.
Precesion: Up to 15 digits after the decimal point

Array: Collection of elements of the variables , Pointers, Structures, Union , Enumeration
(enum).....

Data types are essential for managing memory
Efficient and Error-free processing.....
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    // int a = 10;
    // float b = 5.25;

    // float result = a + b;

    // float result2 = (float)a - b;

    // printf("Implicit conversion:\n");
    // printf("a + b = %f\n", result);

    // printf("Explicit Conversion:\n");
    // printf("a + b = %f\n",result2);

    // Arithmetic operator
    int x = 10, y = 3;
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);

    printf("\n");

    // Relational OPerator
    int a = 5, b = 10;
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    printf("\n");

    // Logical Operation -> Combinations of 1's and 0's
    int a1 = 5, b1 = 10;

    printf("(a < b) && (b > 0):%d\n", (a1 < b1) && (b1 > 0));

    printf("(a > b) || (b > 0): %d\n", (a1 > b1) || (b1 > 0));

    printf("!(a==b):%d\n", !(a1 == b1));

    printf("\n");

    // Bitwise Operator
    // Perform operations on the binary representations of numbers.....

    // Increment and decrement operator

    int aa = 5, bb = 9;

    printf("bb << 2 = %d\n", bb << 2);
    printf("aa >> 2 = %d\n", aa >> 2);

    // Assignment Operators........

    // Increment and Decrement operators.........
    for (int i = 0; i < 10; i++)
    {
        printf("The number is: %d\n", i);
    }
    for (int i = 10; i > 0; i--)
    {
        printf("The number is: %d\n", i);
    }

    // Pre and Post increment and decrement.....
    int x1 = 10;
    printf("x++ = %d\n", x++);
    printf("x-- = %d\n", x--);
    printf("++x = %d\n", ++x);
    printf("--x = %d\n", --x);

    // Conditional Operator and a Ternary Operator
    // condtion?expression1:expression2;

    /*You
why ternary operator called ternary ?
Copilot
The ternary operator is called "ternary" because it operates on three operands. It's a shorthand way of writing an if-else statement. In C, the ternary operator is represented by the ? : syntax.*/

    int num = 10, num1 = 20;
    int max = (num > num1) ? num : num1;

    printf("The greater value from the both is: %d\n", max);

    // Conditional Statement.......
    // if-else statement
    // switch statement.......

    int nun;
    printf("Enter the value: ");
    scanf("%d",&nun);

    if(nun %2 == 0){
        printf("This is an even number....");
    } else {
        printf("This is a odd number....");
    }

// Next for if-else ladder statement.............
    // return 0;
}