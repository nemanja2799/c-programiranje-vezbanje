#include <stdio.h>
#include <stdlib.h>

enum workingDays
{
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
};

int main()
{
    enum workingDays userDay;
    printf("Please enter the day you worked: ");
    scanf("%d", &userDay);
    if(userDay == MONDAY)
        printf("Monday.. You should do this and this.");
    else if(userDay == TUESDAY)
        // Do somthing else that is related to Tuesday
        printf("Tuesday: Do something else!");
    return 0;
}