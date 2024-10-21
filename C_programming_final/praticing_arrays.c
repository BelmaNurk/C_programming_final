#include<stdio.h>

int main(){
    /*
    //different ways od declaring array
    int MyNumbers[]={1,2,3,4,5};
    int MyNumbers1[4]; //its elemets will be random numbers
    int i=0;
    for(i=0; i<5; i++){
        printf("%d ", MyNumbers[i]);
    }
    printf("\n");
    for(i=0; i<5; i++){
        printf("%d ", MyNumbers1[i]);
    }
    */
   int first_element;
   int second_element;
   int multidimenzional_array[10][10];
   for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
    printf("Enter matrix elements: [%d][%d]:", i,j);
    scanf("%d",&multidimenzional_array[i][j]);
    }
   }
   printf("\n");
   for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        printf("%d ", multidimenzional_array[i][j]);
    }
    printf("\n");
   }
    return 0;
}