#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct login {
    int choice;
    char name[50];
    char email[60];
    char password[60];
    bool flag;
    char lg_email[50];
    char lg_pass[50];
} lg;

int main() {
    lg lg1;

    printf("1 : Register\n");
    printf("2 : Login\n");
    scanf("%d", &lg1.choice);

    if (lg1.choice == 1) {
        printf("Enter Your Name: ");
        scanf("%s", lg1.name);

        printf("Enter Your Email: ");
        scanf("%s", lg1.email);

        printf("Enter Your Password: ");
        scanf("%s", lg1.password);

        printf("Enter Your Flag 0 or 1: ");
        scanf("%s", &lg1.flag);

        if (lg1.flag != true && lg1.flag != false) {
            printf("Please Enter a valid flag (0 or 1)\n");
        }

        printf("Please Enter a Data To Login");

        printf("Enter Your Email: ");
        scanf("%s", lg1.lg_email);

        printf("Enter Your Password: ");
        scanf("%s", lg1.lg_pass);

        if (lg1.flag == 1) {
            if (lg1.lg_email==lg1.email) {
                printf("User Logged Successfully\n");
            } else {
                printf("Email Or Password Is Wrong\n");
            }
        } else {
            printf("Something Is Wrong\n");
        }

    } else if (lg1.choice == 2) {
        printf("Enter Your Email: ");
        scanf("%s", lg1.lg_email);

        printf("Enter Your Password: ");
        scanf("%s", lg1.lg_pass);

        if (lg1.flag == 1) {
            if (lg1.lg_email==lg1.email) {
                printf("User Logged Successfully\n");
            } else {
                printf("Email Or Password Is Wrong\n");
            }
        } else {
            printf("Something Is Wrong\n");
        }
    }

    return 0;
}
