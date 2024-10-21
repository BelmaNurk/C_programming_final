#include<stdio.h>

int main(){

    typedef struct{
        int employeeID;
        char name[50];
        float salary;
    }employee;

    employee e1, e2, e3;
    
    printf("Enter data for three employees: \n");
    printf("Enter name: ");
    scanf("%s", &e1.name);
    printf("Enter employeeID: ");
    scanf("%d", &e1.employeeID);
    printf("Enter salary: ");
    scanf("%f", &e1.salary);
    printf("Enter name: ");
    scanf("%s", &e2.name);
    printf("Enter employeeID: ");
    scanf("%d", &e2.employeeID);
    printf("Enter salary: ");
    scanf("%f", &e2.salary);
    printf("Enter name: ");
    scanf("%s", &e3.name);
    printf("Enter employeeID: ");
    scanf("%d", &e3.employeeID);
    printf("Enter salary: ");
    scanf("%f", &e3.salary);


    return 0;
}