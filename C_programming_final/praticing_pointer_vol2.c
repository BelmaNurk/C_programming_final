#include<stdio.h>

int main(){
    printf("Adding two numbers using pointers.\n");
    printf("----------------------------------------\n");
    int x,y;
    int* ptr_x=&x;
    int* ptr_y=&y;

    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    int sum=*ptr_x+*ptr_y;
    printf("Sum: %d", sum);

    return 0;
}