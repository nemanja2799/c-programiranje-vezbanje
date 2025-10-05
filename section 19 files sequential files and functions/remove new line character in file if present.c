#include <stdio.h>
#include <stdlib.h>


int main()
{
    char filePath[30];
    printf("Enter the full path of the file you want to delete: ");
    fgets(filePath, sizeof(filePath), stdin);

    // Remove newline character if present
    int len = strlen(filePath);
    if( len>0 && filePath[len -1] == '\n')
    {
        filePath[--len] = '\0';
    }
    int result = remove(filePath);
    if(result != 0)
    {
        printf("removing the file has failed...\n");
    }
    else
    {
        printf("Hooray!\n");
    }
    return 0;
}