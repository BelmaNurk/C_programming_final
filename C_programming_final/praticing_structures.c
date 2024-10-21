#include<stdio.h>

int main(){
    //struct vrijeme{
    //    int sekunde=0;
    //    int minute=0;
    //    int sati=0;
    //};

    //struct vrijeme tekuce_vrijeme, naredno_vrijeme;

    //printf("Unesite tekuce vrijeme : ");
    //scanf("%d%d%d", &tekuce_vrijeme.sekunde, &tekuce_vrijeme.minute, &tekuce_vrijeme.sati);
    //if(++tekuce_vrijeme.sekunde==60) tekuce_vrijeme.sekunde=0;
    //if(++tekuce_vrijeme.minute==60) tekuce_vrijeme.minute=0;
    //if(++tekuce_vrijeme.sati==24) tekuce_vrijeme.sati=0; 
    
   // printf("Naredno vrijeme : %d-%d-%d", tekuce_vrijeme.sekunde, tekuce_vrijeme.minute, tekuce_vrijeme.sati);

   typedef struct
   {
    char name[50];
    float total_marks;
    int age;
   } Student;
   
   Student s1, s2;

   printf("Enter name, total marks and age for two students.\n");
   printf("Enter the first name: ");
   scanf("%s", &s1.name);
   printf("Enter age of the first student: ");
   scanf("%d", &s1.age);
   printf("Enter total marks of the first student: ");
   scanf("%f", &s1.total_marks);

   printf("Enter the name of a second studnet: ");
   scanf("%s", &s2.name);
   printf("Enter age of the second student: ");
   scanf("%d", &s2.age);
   printf("Enter total marks of the second student: ");
   scanf("%f", &s2.total_marks);

   printf("Average of total marks %.2f", (s1.total_marks+s2.total_marks)/2);
   
   

    return 0;
}