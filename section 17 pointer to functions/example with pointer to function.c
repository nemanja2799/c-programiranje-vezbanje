#include <stdio.h>
#include <stdlib.h>


void ageFunc(int age)
{
    printf("Your age is %d\n", age);
}

int main()
{
    int age;
    void (*pf)(int); // We created a "pointer to function"
    printf("Enter your age: ");
    scanf("%d", &age);

    //pf = &ageFunc   // Ove dve linije su iste jer ageFunc bez zagrada mozemo posmatrati kao 
    pf = ageFunc;    //adresu pocetka12 niza instrukcija koje ta funkcija sadrzi(pokazivac na prvu instrukciju
    
    (pf)(age);
    //(*pf)(age); ove linije su pozivi funkcija i obe rade isto

    //ageFunc(age);
    printf("Hello World!\n");
    return 0;
}