#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    int isLoggedIn = 0;

    while (!isLoggedIn) {
        int choice;
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter username: ");
                scanf("%s", username);
                printf("Enter password: ");
                scanf("%s", password);
                printf("Registration successful!\n");
                break;
            case 2: {
                char enteredUsername[50];
                char enteredPassword[50];
                printf("Enter username: ");
                scanf("%s", enteredUsername);
                printf("Enter password: ");
                scanf("%s", enteredPassword);

                if (strcmp(username, enteredUsername) == 0 && strcmp(password, enteredPassword) == 0) {
                    printf("Login successful!\n");
                    isLoggedIn = 1;
                } else {
                    printf("Login failed. Invalid username or password.\n");
                }
                break;
            }
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
