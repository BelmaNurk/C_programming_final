#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Enter two integers to check whether they are equal or not.\n");
    int x, y;
    scanf("%d%d", &x, &y);

    if (x == y)
    {
        printf("Numbers are equal.\n");
    }
    else
    {
        printf("Numers are not equal.\n");
    }

    printf("Now lets see if the first number is ever or odd.\n");
    if (x % 2 == 0)
        printf("First number is even.\n");
    else
        ("First number is odd.\n");

    bool is_negative = 0;
    printf("Let's see if second number is positive or negative.\n");
    if (x > 0){
        is_negative = 0;
        printf("Second number is positive. %d\n", is_negative);
    }
    else{
        is_negative = 1;
        printf("Second number is negative. %d\n", is_negative);
    }

    printf("Please enter a year to check if the year is leap on not.\n");
    int year;
    scanf("%d", &year);
    if(year%4==0 && year%100!=0){
        printf("You have entered leap year.\n");
    }
    else{
        printf("%d is not leap year.\n", year);
    }

    return 0;
}