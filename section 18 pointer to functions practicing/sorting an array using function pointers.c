#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool ascending(int num1, int num2)
{
    if(num1 < num2)
        return true;
    else
        return false;
}

bool descending(int num1, int num2)
{
    if(num1 > num2)
        return true;
    else
        return false;
}
void swap(int* ptr1, int* ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void sort(int *arr, int n , bool (*compare)(int, int))
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(!((compare)(arr[i], arr[j])))
                swap(&arr[i], &arr[j]);
        }
    }
}

int main()
{
    int sortType;
    bool (*funcPtr)(int, int);
    int arr[5] = {14, 10, 34, 7, 12};
    printf("Enter sorting type \n0 - ascending \n1 - descending\n");
    scanf("%d", &sortType);
    if(sortType == 0)
        funcPtr = ascending;
    else if( sortType == 1)
        funcPtr = descending;
    sort(arr, 5, funcPtr);
    printf("Array after sorting:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}