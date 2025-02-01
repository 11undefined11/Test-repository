#include <stdio.h>

void printGreeting(int choice) {
    switch(choice) {
        case 1:
            printf("Hello, World!\n");
            break;
        case 2:
            printf("Bonjour, le monde!\n");
            break;
        case 3:
            printf("Hola, Mundo!\n");
            break;
        case 4:
            printf("Hallo, Welt!\n");
            break;
        case 5:
            printf("Ciao, Mondo!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main() {
    int choice;
    do {
        printf("Choose a greeting:\n");
        printf("1. English\n");
        printf("2. French\n");
        printf("3. Spanish\n");
        printf("4. German\n");
        printf("5. Italian\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice != 0) {
            printGreeting(choice);
        }
    } while (choice != 0);

    printf("Goodbye!\n");
    return 0;
}