#include <stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct employee {
    char name[10];
    float age;
    int id;
}Employee;

Employee *createEmployeesArray(int arrSize)
{
    Employee *ArrayOfEmployees = NULL;
    ArrayOfEmployees =(Employee *)malloc(arrSize*sizeof(Employee));
    if (ArrayOfEmployees == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    for(int i=0;i<arrSize;i++)
    {
        printf("Input name of Employe %d\t",i+1);
        scanf("%9s",ArrayOfEmployees[i].name);
        printf("\n");
        printf("Input age of Employee %d\t", i+1);
        scanf("%f",&ArrayOfEmployees[i].age);
        printf("\n");
        printf("Input id of Employee %d\t", i+1);
        scanf("%d",&ArrayOfEmployees[i].id);
        printf("\n");
    }
    return ArrayOfEmployees;
}

void createEmployeesArray2(int arrSize, Employee **employeeArr)
{
    *employeeArr =(Employee *)malloc(arrSize*sizeof(Employee));
    if (*employeeArr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    for(int i=0;i<arrSize;i++)
    {
        printf("Input name of Employe %d\t",i+1);
        scanf("%9s",(*employeeArr)[i].name);
        printf("\n");
        printf("Input age of Employee %d\t", i+1);
        scanf("%f",&(*employeeArr)[i].age);
        printf("\n");
        printf("Input id of Employee %d\t", i+1);
        scanf("%d",&(*employeeArr)[i].id);
        printf("\n");
    }
}

int main()
{
    Employee *ptr = NULL;
    Employee *Arr1 = NULL;
    Arr1 = createEmployeesArray(2);
    if (Arr1 == NULL) {
        return 1;  // Prekid ako alokacija nije uspela
    }
    createEmployeesArray2(2,&ptr);
    if (ptr == NULL) 
    {  // Ako alokacija nije uspela...
        printf("Allocation for ptr failed.\n");
        return 1;  // Ne oslobađamo Arr1, jer nema veze sa ovim pokazivačem
    }
    free(ptr);
    free(Arr1);
}