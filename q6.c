#include <stdio.h>
#include <string.h> 

#define TAM 30

int main() {
    char firstWord[TAM];
    char secondWord[TAM];
    
    puts("Digite o primeiro nome:");
    fgets(firstWord, TAM, stdin);

    if (firstWord[strlen(firstWord) - 1] == '\n') {
        firstWord[strlen(firstWord) - 1] = '\0';
    }

    int i, j;

    for (i = strlen(firstWord) - 1, j = 0; i >= 0; i--, j++) {
        secondWord[j] = firstWord[i];
    }
    secondWord[j] = '\0'; 

    printf("%s\n", secondWord);

    return 0;
}
