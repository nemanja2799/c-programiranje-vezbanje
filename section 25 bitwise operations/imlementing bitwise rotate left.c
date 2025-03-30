#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t RotateFunction(uint8_t value)
{
    uint8_t rotatedValue;
    uint8_t mask = 1;
    uint8_t mostDigitLeft = value & (mask<<7);
    rotatedValue = (value << 1);
    if(mostDigitLeft != 0)
        rotatedValue |= mask;
    return rotatedValue;
}

void PrintBinary(uint8_t value)
{
    for(int i=7; i>=0; i--)
    {
        printf("%hhu", (value>>i) & 1);
    }
        
}

int main()
{
    uint8_t num1 = 0b10101010;
    uint8_t rotatedNum1 = RotateFunction(num1);
    printf("Rotated value of number:");
    PrintBinary(num1);
    printf(" is: ");
    PrintBinary(rotatedNum1);
    printf("\n");
    return 0;
}