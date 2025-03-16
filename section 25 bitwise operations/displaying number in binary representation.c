#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    int result;
    int8_t value = 0b01101010;
    uint8_t mask = 1 << 7;
    for(int i=0; i < 8; i++)
    {
        result = value & mask;
        mask >>=1;
        if(result != 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

}