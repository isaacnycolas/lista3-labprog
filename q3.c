#include <stdio.h>
#include <string.h>

#define TAM 30

int main() {
    char firstName[TAM];

    printf("Enter your first name: ");
    fgets(firstName, TAM, stdin);

    // Remove the newline character, if it exists
    size_t len = strlen(firstName);
    if (len > 0 && firstName[len - 1] == '\n') {
        firstName[len - 1] = '\0';
    }

    printf("Your first name is: %s\n", firstName);

    return 0;
}
