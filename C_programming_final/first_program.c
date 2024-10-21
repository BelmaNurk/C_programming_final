#include <stdio.h>

int main()
{
    printf("\tWelcome to my calculator!\t\n\n");
    printf("First, let's talk about data types in C.\n\n");
    printf("In C, we have 4 primitive data types and more. They are: int, float, double, and char.\n");
    printf("An int represents a whole number like 1, and the size of this data type is %lu bytes.\n", sizeof(int));
    printf("A float represents a decimal number like 1.0, and the size of this data type is %lu bytes.\n", sizeof(float));
    printf("A double also represents a decimal number like 1.0, and the size of this data type is %lu bytes.\n", sizeof(double));
    printf("A char represents a character like 'a', and the size of this data type is %lu bytes.\n\n", sizeof(char));

    char operation;
    int first_operand;
    int second_operand;

    printf("Enter your numbers.\n");
    scanf("%d", &first_operand);
    scanf("%d", &second_operand);

    printf("Choose your operation: +, -, *, /\n");
    scanf(" %c", &operation);

    if (operation == '+')
    {
        printf("The sum of your numbers is: %d\n", first_operand + second_operand);
    }
    else if (operation == '-')
    {
        printf("The difference of your numbers is: %d\n", first_operand - second_operand);
    }
    else if (operation == '*')
    {
        printf("The product of your numbers is: %d\n", first_operand * second_operand);
    }
    else if (operation == '/')
    {
        if (second_operand != 0) // Provera da se ne deli sa nulom
        {
            printf("The division of your numbers is: %f\n", (float)first_operand / second_operand);
        }
        else
        {
            printf("Division by zero is not allowed!\n");
        }
    }
    else
    {
        printf("Invalid operation.\n");
    }

    printf("\nType casting\n");
    printf("Implicit conversion\n");
    int a=5;
    float b=10.3;
    a=b;
    printf("%d\n", a); //koji god format specifier stavim ispisuje 10 ne znam zasto
    //u svakom slucaju implicitna konverzija odnosno automatska nije dobra jer gubimo podatke ako npr konvertujemo iz floata u int
    //bolja je ekspicitna jer imamo kontorlu 
    printf("%c",'\007');

    return 0;
}
