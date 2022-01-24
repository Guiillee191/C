#include <stdio.h>

#define MAX_SIZE_STRING 100

typedef struct _employee{
    char lastName[MAX_SIZE_STRING];
    char firstName[MAX_SIZE_STRING];
    int ID;
    int SSN_last4;
    char title[MAX_SIZE_STRING];
}Employee;

typedef struct _employees{
    Employee empleado1;
    Employee empleado2;
}Employees;

int main(void){
    Employees e;
    printf("Enter employee name: ");
    scanf("%s", e.empleado1.firstName);
    printf("Enter employee last name: ");
    scanf("%s", e.empleado1.lastName);
    printf("Enter employee ID: ");
    scanf("%d", &e.empleado1.ID);
    printf("Enter employee SSN: ");
    scanf("%d", &e.empleado1.SSN_last4);
    printf("Enter employee title: ");
    scanf("%s", e.empleado1.title);
    
    printf("Enter employee name: ");
    scanf("%s", e.empleado2.firstName);
    printf("Enter employee last name: ");
    scanf("%s", e.empleado2.lastName);
    printf("Enter employee ID: ");
    scanf("%d", &e.empleado2.ID);
    printf("Enter employee SSN: ");
    scanf("%d", &e.empleado2.SSN_last4);
    printf("Enter employee title: ");
    scanf("%s", e.empleado2.title);
    
    printf("fname: %s, lname: %s, ID: %d, SSN: %d, title: %s\n", e.empleado1.firstName, e.empleado1.lastName, e.empleado1.ID, e.empleado1.SSN_last4, e.empleado1.title);
    
    printf("fname: %s, lname: %s, ID: %d, SSN: %d, title: %s\n", e.empleado2.firstName, e.empleado2.lastName, e.empleado1.ID, e.empleado2.SSN_last4, e.empleado2.title);
}
