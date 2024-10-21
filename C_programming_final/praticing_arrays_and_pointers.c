#include<stdio.h>

#define MAX_SIZE 300 // Capitalize to indicate a constant

int main(){

    printf("Enter the number of elements to store in the array (max %d): ", MAX_SIZE);
    int number_of_elements;
    int array_of_int[MAX_SIZE];
    scanf("%d", &number_of_elements);

    // Error handling: check if the number of elements is within the allowed size
    if (number_of_elements > MAX_SIZE || number_of_elements <= 0) {
        printf("Invalid number of elements. Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1; // Exit the program with an error code
    }

    int *ptr = array_of_int;
    int number;

    printf("Enter the %d elements:\n", number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%d", &number);
        *ptr = number;
        ptr++;
    }

    printf("You have stored the following elements in the array:\n");
    ptr = array_of_int; // Reset the pointer to the start of the array
    for (int i = 0; i < number_of_elements; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
