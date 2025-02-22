#include <stdio.h>
#include <stdlib.h>


// Functions to perform operation on one element of an array
void printInt(void* a)
{
    printf("%d\t", *(int*)a);
}

void printFloat(void* a)
{
    printf("%.2f\t", *(float*)a);
}

void printDouble(void* a)
{
    printf("%.2lf\t", *(double*)a);
}

void printChar(void* a)
{
    printf("%c\t", *(char*)a);
}

// Function to perform operation on all elements of an array
void performOperation(void* arr, int arrLenght, int elemSize, void (*operation)(void*))
{
    for(int i = 0; i < arrLenght; i++)
    {
        operation((char*)(arr + i*elemSize));
    }
    printf("\n");
}

int main()
{
    // Integer array
    int arrInt[] = {1, 2, 3};
    performOperation(arrInt, 3, sizeof(int), printInt);

    // Float array
    float arrFloat[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    performOperation(arrFloat, 5, sizeof(float), printFloat);

    // Double array
    double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    performOperation(arrDouble, 5, sizeof(double), printDouble);

    // Char array
    char arrChar[] = {'c', 'a', 'k'};
    performOperation(arrChar, 3, sizeof(char), printChar);

    return 0;
}














