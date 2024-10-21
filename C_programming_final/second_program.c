#include<stdio.h>
int f;
int g;

int main(){
    int a=4;
    int b;
    int c;
    int d;
    //ne inicijalizirane varijable imaju random vrijednosti, ovdje govorimo o lokalnim varijablama

    printf("a=%d, b=%d, c=%d, d=%d\n", a,b,c,d);
    printf("f=%d, g=%d", f,g); //s druge strane globalne varijable ukoliko nisu inicijalizirane imaju vrijednost 0
    printf("\nAdrese lokalnih varijabli:\n");
    printf("%p %p %p %p", &a, &b, &c,&d);
    printf("\nAdrese globalnih varijabli:\n ");
    printf("%p %p",&f,&g );

    int x,y;
    printf("Unesite dva broja.\n");
    int z=scanf("%d%d", &x, &y);
    printf("Funkcija scanf vraca broj procitanih elemenata. U nasem slucaju je to %d", z);

    return 0;
}