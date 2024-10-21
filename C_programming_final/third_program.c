#include<stdio.h>

int main(){
    for(int i=0; i<5; i++){
        if(i==3) continue; //nece ispisat 3 nego skace dalje
        printf("%d", i);
        if(i==4)
        break; //izlazi iz petlje
    }

    int day;
    scanf("%d", &day);
    switch(day)
    {
        case 1:
        printf("1");
        break;
        case 2:
        printf("2");
        break;
        case 3:
        printf("3");
        break;
        case 4:
        printf("4");
        break;
        case 5:
        printf("4");
        break;
       default:
       printf(".");
       break;
       //obavezno ide break nakon svakog case jer inace petlja propada
       //default je opcioni i ne mora imat break na kraju
       // bez deafulta i u slucaju da nemamo case, nece se nista dogoditi
       

    
    }

    return 0;
}