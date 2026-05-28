#include <stdio.h>

typedef struct {
    char *username;
    char *email;
    char *password;
    int admin;
} User;

int main()
{
    User account_1;
    account_1.username = "testname";
    account_1.email = "a@test.com";
    account_1.password = "password123";
    account_1.admin = 0;

    printf("User Account: %s\n", account_1.username);
    printf("\tEmail: %s\n", account_1.email);
    printf("\tPassword: %s\n", account_1.password);
    printf("\tAdmin: %d\n", account_1.admin);

    return 0;
}
