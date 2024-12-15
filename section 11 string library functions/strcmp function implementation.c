#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strCmp(char * str1, char * str2)
{
    int result = 0;
    int i = 0;
    if(str1[i]>str2[i])
        return 1;
    else if(str1[i]<str2[i])
        return -1;
    while((str1[i] == str2 [i])&&(i < strlen(str1)))
    {
        i++;
        if(str1[i]>str2[i])
            return 1;
        else if(str1[i]<str2[i])
            return -1;

    }
    return 0;

}

int main()
{
    char str1[] = "sana";
    char str2[] = "lana";
    int result = strCmp(str1, str2);
    printf("%d", result);

    return 0;
}