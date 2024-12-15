#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * strCpy(char * StringToCpy, char * ReceivingStr)
{
    //char *tempStr= NULL;
    //tempStr = malloc(strlen(StringToCpy)* sizeof(char));
    int len = strlen(StringToCpy)+1;  // voditi racuna o redosledu poziva stringova, ako se u funkciji pozovu obrnutim redosledom
    // to moze izazvati exceptation segmentation fault, zato sto pokusavamo da odredimo duzinu stringa koji je alociran na NULL, isto se moze desiti i na realloc pozivu funkcije
    ReceivingStr = realloc(ReceivingStr , ( len* sizeof(char)));
    int i = 0;
    for(i= 0; i < strlen(StringToCpy); i++)
        ReceivingStr[i] = StringToCpy[i];
    ReceivingStr[strlen(StringToCpy)] = '\0';
    //ReceivingStr = tempStr;
    return ReceivingStr;
}

int main()
{
    char str1[5] = "Tech";
    char *str2 = NULL;
    str2 = strCpy(str1,str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    return 0;
}