# include <stdio.h>
#include <stdlib.h>

// rename function can also be used to move a file from one directory to another
// by specifying the new path in the second argument of the function
int main()
{
    int result;
    result = rename("myFile.txt", "yourNewFile.txt");
    if(result == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Error renaming the file.\n");
    }
} 