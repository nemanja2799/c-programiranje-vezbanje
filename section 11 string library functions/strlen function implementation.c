#include <stdio.h>

int my_strlen(char* StringBuffer)
{
    int i = 0;
    while(StringBuffer[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char name[5]="Tech";
    printf("name lenght: %d \n", my_strlen(name));

    return 0;
}