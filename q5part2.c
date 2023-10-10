#include <stdio.h>
#include <string.h> 

#define TAM 30

int main() {
    char firstWord[TAM];
    char secondWord[TAM];

    char result[2 * TAM];

    puts("Digite o primeiro nome:");
    fgets(firstWord, TAM, stdin);
    puts("Digite o segundo nome:");
    fgets(secondWord, TAM, stdin);

    if (firstWord[strlen(firstWord) - 1] == '\n') {
        firstWord[strlen(firstWord) - 1] = '\0';
    }

    if (secondWord[strlen(secondWord) - 1] == '\n') {
        secondWord[strlen(secondWord) - 1] = '\0';
    }

    strcpy(result, firstWord); 
    strcat(result, secondWord); 

    printf("A concatenação: %s\n", result); 

    return 0;
}
