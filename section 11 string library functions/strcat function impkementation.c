#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char * strCat(char *destinationString, char* sourceString)
{
    char * tempString;
    tempString = (char *)malloc((strlen(destinationString)+strlen(sourceString)+1));
    int i = 0;
    for(i=0;i<strlen(destinationString);i++)
        tempString[i]=destinationString[i];
    for(i=0;i<strlen(sourceString);i++)
        tempString[i+strlen(destinationString)] = sourceString[i];
    tempString[strlen(destinationString)+strlen(sourceString)] = '\0';

    //memcpy(tempString, destinationString, strlen(destinationString));
    //memcpy((char *)(tempString+strlen(destinationString)),sourceString,strlen(sourceString));
    // treba napomenuti da je ovde moguca dodela pojedinacnim elementima stringa tempString zato sto mu se prvi put dodeljuju elementi
    // sledeca neka dodela ne bi bila moguca, vec bi moralo da se dodeljuje vrednost celom stringu
    return tempString;
}

int main()
{
    char strDestination[] = "Hello";
    char strSource[] = "World!";
    char *resultString;
    resultString = strCat(strDestination, strSource);
    printf("string after concatenation: %s \n", resultString);   
}