#include <stdio.h>
#include "user.h"

int main() {
    int choice;

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Create User\n");
        printf("2. Delete User\n");
        printf("3. Credit Money\n");
        printf("4. Debit Money\n");
        printf("5. Transfer Money\n");
        printf("6. Display All Users\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createUser();
                break;
            case 2:
                deleteUser();
                break;
            case 3:
                creditMoney();
                break;
            case 4:
                debitMoney();
                break;
            case 5:
                transferMoney();
                break;
            case 6:
                displayUsers();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
