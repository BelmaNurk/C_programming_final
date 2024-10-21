#include <stdio.h>
#include <string.h>

int main() {

    typedef struct {
        char title[50];
        char author[50];
        float price;
    } book;

    book b1, b2, b3;

    printf("Enter data for three books.\n");

    // Unos podataka za prvu knjigu
    printf("Enter title: ");
    fgets(b1.title, sizeof(b1.title), stdin);
    b1.title[strcspn(b1.title, "\n")] = '\0'; // Uklanjanje \n ako postoji

    printf("Enter author: ");
    scanf("%s", b1.author);
    printf("Enter price: ");
    scanf("%f", &b1.price);

    // Čišćenje input buffera nakon scanf-a
    while (getchar() != '\n'); 

    printf("\n");

    // Unos podataka za drugu knjigu
    printf("Enter title: ");
    fgets(b2.title, sizeof(b2.title), stdin);
    b2.title[strcspn(b2.title, "\n")] = '\0'; // Uklanjanje \n ako postoji

    printf("Enter author: ");
    scanf("%s", b2.author);
    printf("Enter price: ");
    scanf("%f", &b2.price);

    // Čišćenje input buffera nakon scanf-a
    while (getchar() != '\n'); 

    printf("\n");

    // Unos podataka za treću knjigu
    printf("Enter title: ");
    fgets(b3.title, sizeof(b3.title), stdin);
    b3.title[strcspn(b3.title, "\n")] = '\0'; // Uklanjanje \n ako postoji

    printf("Enter author: ");
    scanf("%s", b3.author);
    printf("Enter price: ");
    scanf("%f", &b3.price);

    // Čišćenje input buffera nakon scanf-a
    while (getchar() != '\n'); 

    printf("\nData for the books:\n");
    printf("Book 1: Title: %s, Author: %s, Price: %.2f\n", b1.title, b1.author, b1.price);
    printf("Book 2: Title: %s, Author: %s, Price: %.2f\n", b2.title, b2.author, b2.price);
    printf("Book 3: Title: %s, Author: %s, Price: %.2f\n", b3.title, b3.author, b3.price);

    return 0;
}
