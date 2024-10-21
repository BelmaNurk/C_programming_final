#include <stdio.h>

int main()
{

    printf("Show the basic declaration of pointer: \n");
    printf("----------------------------------------\n");

    int m = 10;
    int n, o;
    int *z = &m;

    printf("Here is m= %d, n and o are two integer variable and *z is an integer\n");

    printf("z stores the adress od m= %p.\n", z);
    printf("Adress of m is: %p.\n", &m);

    printf("*z stores value of m= %d.\n", *z);
    printf("&m is the adress of m = %p.\n", &m);
    printf("&n is the adress of n = %p.\n", &n);
    printf("&o is the adress of 0 = %p.\n", &o);

    printf("\n");
    printf("Adress of m : %p\n", &m);
    printf("Value of m : %d\n", m);

    int* ab=&m;

    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);

    m=34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);

    *ab=7;

    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Adress of m : %p\n", &m);
    printf("Value of m : %d\n", m);

    m=300;
    double fx=300.600006;
    char cht='z';

    printf("\n");
    printf("Demonstrate the use of & and * operator.\n");
    printf("------------------------------------------\n");
    printf("m = %d\n", m);
    printf("fx = %lf\n", fx);
    printf("cht = %c",cht);
    printf("Using & operator.\n");
    printf("------------------------------------------\n");
    printf("Adress of m : %p\n", &m);
    printf("Adress of fx : %p\n", &fx);
    printf("Adress of c : %p\n", &cht);

    printf("Using & and * operator.\n");
    printf("------------------------------------------\n");
    printf("Adress of m : %p\n", *(&m));
    printf("Adress of fx : %p\n", *(&fx));
    printf("Adress of c : %p\n", *(&cht));
    
    int *mptr=&m;
    double *fxptr=&fx;
    char *chtptr=&cht;

    printf("Using only pointer variable.\n");
    printf("------------------------------------------\n");
    printf("Adress of m : %p\n", mptr);
    printf("Adress of fx : %p\n", fxptr);
    printf("Adress of c : %p\n", chtptr);

    printf("Using only pointer * operator.\n");
    printf("------------------------------------------\n");
    printf("Adress of m : %d\n", *mptr);
    printf("Adress of fx : %lf\n", *fxptr);
    printf("Adress of c : %c\n", *chtptr);
    
    


    







    return 0;
}