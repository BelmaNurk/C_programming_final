#include <stdio.h>

int main()
{
    printf("Enter two integers to check whether they are equal or not.\n");
    int x, y;
    scnaf("%d%d", &x, &y);

    if (x == y)
    {
        printf("Numbers are equal.\n");
    }
    else
    {
        printf("Numers are not equal.\n");
    }
    return 0;
}