#include<stdio.h>

void find_min_max();

int main(){
    find_min_max();

    return 0;
}

void find_min_max(){
    printf("Input 5 values: ");
    int array[5];
    int i=0;
    while(i<5){
        printf("Enter number: ");
        scanf("%d", &array[i]);
        i++;

    }
    int min=array[0];
    int max=array[0];

    for(int i=0; i<5; i++){
        if(array[i]<min) min=array[i];
        if(array[i]>max) max=array[i];
    }

    printf("Minumum: %d\n", min);
    printf("Maximum: %d\n", max);

}