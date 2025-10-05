# include <stdio.h>
#include <stdlib.h>

// rename function can also be used to move a file from one directory to another
// by specifying the new path in the second argument of the function
// if file alredy exists in the destination path, it will be overwritten or function will fail depending on the system
// we can use to change file extension as well
// 
int main()
{
    int result;
    // result = rename("C:\\Users\\HP\\Desktop\\c programming practice\\myFile.txt", "C:\\Users\\HP\\Desktop\\c programming practice2\\yourNewFile.txt");
    // result = rename("C:\\Users\\HP\\Desktop\\c programming practice\\myFile.txt", "C:\\Users\\HP\\Desktop\\c programming practice2\\yourNewFile.csv");
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