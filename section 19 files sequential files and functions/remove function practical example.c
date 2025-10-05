#include <stdio.h>
#include <stdlib.h>




int main()
{
    // Open file in write mode. If file does not exist, it will be created.
    FILE* file = fopen("log.txt", "w");
    if(file == NULL)
    {
        printf("Failed to open file\n");
        return 1;
    }
    // Write some data to file
    fprintf(file, "Procesing user request...\n");

    // Close file
    fclose(file);

    // Delete the file
    if(remove("log.txt") != 0)
    {
        printf("failed to delete file\n");
    }
    else
    {
        printf("File deleted successfully\n");
    }
}