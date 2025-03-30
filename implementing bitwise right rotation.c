#include <stdio.h>
#include <stdlib.h>

int RotateFunction(int value)
{   
    int rotatedValue;
    int mask = 1;
    int mostRightDigit = value & mask;
    rotatedValue = value >> 1;
    if(mostRightDigit)
        rotatedValue |= (mostRightDigit << 7);
    else
        rotatedValue &= ~(mask << 7);
    return rotatedValue;
}

void PrintBinary(int value)
{
    for(int i=7; i>=0; i--)
        printf("%d", (value>>i) & 1);
}

int main()
{
    int num1 = 0b10101010;
    int rotatedNum1 = RotateFunction(num1);
    printf("Rotated value of number:");
    PrintBinary(num1);
    printf("is:");
    PrintBinary(rotatedNum1);
    return 0;
}