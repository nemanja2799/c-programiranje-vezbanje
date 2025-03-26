#include <stdio.h>


// Example of macros value
// #define VALUE 5 


// int main()
// {
//     int num = VALUE;
//     int average = (5 + 20 + VALUE);

// }

// **********************************************
//  Example of macro functions

// #define PI 3.14159
// #define SQUARE(X) ((X) * (X))

// int main()
// {
//     double radius = 5.0;
//     double area = PI * SQUARE(radius);

//     printf("THE area of the circle is .2f\n", area);

//     return 0;
// }

// **********************************************

// **********************************************
//  Another example of macro functions

// #define MAX(a, b) ((a) > (b) ? (a) : (b))

// int main()
// {
//     int num1 = 10, num2 = 20;
//     printf("The maximum between %d and %d is %d", num1, num2, MAX(num1, num2));
//     return 0;
// }
// **********************************************

// HASH Operator pretvara x u konstantni string
// #define TO_STRING(x) #x

// int main()
// {
//     printf("%s\n", TO_STRING(Hello World));
//     return 0;
// }
// **********************************************

// Another Hash operator sve sto se stavi iza znaka # se gleda kao string!!!

// #define DISPLAY_INTEGER(x) printf(#x " = %d..!\n", x);
// #define DISPLAY_FLOAT(x) printf(#x " = %f..!\n", x);
// #define DISPLAY_ANY_VALUE(x, placeholder) printf(#x "= %" #placeholder"..!\n", x);

// int main()
// {
//     int num = 10;
//     float num2 = 15.3;

//     DISPLAY_INTEGER(num);
//     DISPLAY_FLOAT(num2);
//     DISPLAY_ANY_VALUE(num, d);
// }

// **********************************************

// Predefined MACROS za vreme i datum 
// __DATE__: The current date as a character literal in format "MMM DD YYYY" format
// __TIME__: The current time as a character literal in format "HH MM SS" format
// __FILE__: The current filename as a character literal
// __LINE__: The current linenumber as a character literal

// int main()
// {
//     printf("This program was compiled on %s at %s.\n", __DATE__, __TIME__);
//     return 0;
// }

// **********************************************

// Combine predefined MACROS in my MACRO

// #define PRINT_LOCATION printf("At %s, line %d.\n , __FILE__, __LINE__")

// int main() 
// {
//     PRINT_LOCATION;
//     return 0;
// }