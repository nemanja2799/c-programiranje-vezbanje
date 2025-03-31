#include <stdio.h>
#include <stdlib.h>


void Swap( int * value1, int * value2)
{
    *value1 ^= (*value2);
    *value2 ^= (*value1);
    *value1 ^= (*value2);
}


int main()
{
    int a, b;
    printf("Enter two numbers to swap their values:\n");
    printf("Num1:");
    scanf("%d", &a);
    printf("Num2:");
    scanf("%d", &b);
    Swap(&a,&b);
    printf("Value of numbers after swap:\n Num1: %d, \t Num2: %d\n", a,b);
}