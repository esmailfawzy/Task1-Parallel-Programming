#include <stdio.h>
#include <string.h>

#define MAX_EMAIL_LENGTH 50
#define MAX_PASSWORD_LENGTH 20

struct User {
    char email[MAX_EMAIL_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};

void registerUser(struct User *users, int *userCount) {
    if (*userCount >= 10) {
        printf("Error: Maximum number of users reached.\n");
        return;
    }

    printf("Enter email: ");
    scanf("%s", users[*userCount].email);

    printf("Enter password: ");
    scanf("%s", users[*userCount].password);

    (*userCount)++;
    printf("Registration successful!\n");
}

void loginUser(struct User *users, int userCount) {
    char email[MAX_EMAIL_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter email: ");
    scanf("%s", email);

    printf("Enter password: ");
    scanf("%s", password);

    int i;
    for (i = 0; i < userCount; i++) {
        if (strcmp(users[i].email, email) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Login successful!\n");
            return;
        }
    }

    printf("Error: Invalid email or password.\n");
}

int main() {
    struct User users[10];
    int userCount = 0;

    int choice;
    do {
        printf("\n1. Register\n2. Login\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser(users, &userCount);
                break;
            case 2:
                loginUser(users, userCount);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
