#include <stdio.h>
#include <stdlib.h>

void addition(int num1, int num2)
{
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

void subtraction(int num1, int num2)
{
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

void multiplication(int num1, int num2)
{
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
}

void division(int num1, int num2)
{
    if(num2 != 0)
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
}

void reminder(int num1, int num2)
{
    if(num2 != 0)
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
}

int main()
{
    void (*funcPtrArray[])(int, int) = {addition, subtraction, multiplication, division, reminder};
    int num1, num2;
    int choice;
    printf("Choice:\n0 - addition \n1 - subtraction \n2 - multiplication \n3 - division \n4 - reminder\n");
    scanf("%d", &choice);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    (*funcPtrArray[choice])(num1, num2);
}