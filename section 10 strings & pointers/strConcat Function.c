#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strConcat(char *originalStr);

int main()
{
    char lana[5] = "ALPHa";
    char* doublestring = NULL;
    doublestring = strConcat(lana);
    printf("%s\n", doublestring);
    return 0;
}

char *strConcat(char *originalStr)
{
    int lenghtOriginal = strlen(originalStr);
    char* newStr = NULL;
    newStr = (char*)malloc(2*lenghtOriginal*sizeof(char)+1);//dodatni karakter je za terminacioni karakter stringa
    for(int i=0;i<lenghtOriginal;i++)
    {
        newStr[i] = originalStr[i];
        newStr[i+lenghtOriginal] = originalStr[i];
    }
    newStr[2*lenghtOriginal] = '\0';//nije isto kada su dva znaka navoda oni su za niz,a jedan znak navoda oznacava karakter ja mislim
    
    return newStr;
}