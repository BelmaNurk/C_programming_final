#include<stdio.h>

int main(){
    printf("Input a string: ");
    char myString[50];
    fgets(myString, sizeof(myString), stdin);

    printf("You entered: %s", myString);
    int lenght=0;
    int i=0;
    while(myString[i]!='\0'){
        lenght++;
        i++;
    }

    printf("Lenght of a string is: %d.\n", lenght-1);

    int words=1;
    int j=0;
    while(myString[j]!='\0'){
        if(myString[j]==' ' || myString[i]=='\t' || myString[i]=='\n'){
            words++;
        }
        j++;
    }
    printf("Number of words in your string: %d", words);
    return 0;
}