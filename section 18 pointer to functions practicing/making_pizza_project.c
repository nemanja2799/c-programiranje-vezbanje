#include <stdio.h>
#include <stdlib.h>


void chooseDoughThickCrust(void)
{
    printf("You choosed Thick Crust Dough.\n");
}

void chooseDoughThinCrust(void)
{
    printf("You choosed Thin Crust Dough.\n");
}

void chooseTomatoSauce(void)
{
    printf("You choosed Tomato Sauce.\n");
}

void choosePestoSauce(void)
{
    printf("You choosed Pesto Sauce.\n");
}

void chooseMozzarelaCheese(void)
{
    printf("You choosed Mozzarela Cheese.\n");
}

void chooseCheddarlaCheese(void)
{
    printf("You choosed Cheddar Cheese.\n");
}

void makePizza(void (*doughFuncPtr) (), void (*sauceFuncptr) (), void (*cheeseFuncPtr) ())
{
    printf("You are making pizza with\n");
    (*doughFuncPtr)();
    (*sauceFuncptr)();
    (*cheeseFuncPtr)();
}

int main()
{
    makePizza(chooseDoughThickCrust, choosePestoSauce, chooseCheddarlaCheese);

    return 0;
}