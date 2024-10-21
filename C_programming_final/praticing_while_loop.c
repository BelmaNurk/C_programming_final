#include <stdio.h>

int main()
{

    /* printf("Printing numbers from 0 do 10.\n");
     int i = 0;
     while (i <= 10)
     {
         printf("%d ", i);
         i++;
     }
     printf("\n");
     printf("Printing numbers from 10 do 0.\n");
     int j = 10;
     while (j >= 0)
     {
         printf("%d ", j);
         j--;
     }


    int user_input;
    printf("Enter integer numbers, if you want to stop, enter 0.\n");
    printf("Enter the first number: ");
    int sum = 0;
    scanf("%d", &user_input);
    if (user_input > 0)
        sum += user_input;
    while (user_input != 0)
    {
        printf("Enter number: ");
        scanf("%d", &user_input);
        if (user_input > 0)
        {
            sum += user_input;
        }
    }
    printf("Sum of positive integers you inserted is: %d", sum);
    */
   

    int user_input;
    int sum = 0;
    printf("Enter integer number, if you want to stop just press 0.\n");
    while (1)
    {
        printf("Enter number: ");
        scanf("%d", &user_input);
        if (user_input > 0){
            sum += 0;
        }
        if (user_input == 0){
            printf("Sum of positive integers you entered is: %d", sum);
            break;
        }
       // else{
            //kada unesem karakter udje u beskonacnu petlju moram skontat kako to rijesit
            break;
        //}
    }
     


    return 0;
}