#include <stdio.h>
#include <string.h> 

#define TAM 30

int main(){
    char firstWord[TAM];
    char secondWord[TAM];

    char result[2*TAM];
    
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
    int i, j;
    for(i = 0; i < strlen(firstWord); i++){
        result[i] = firstWord[i];
    }
    for( j = 0; secondWord[j] != '\0'; j++) {
               result[i + j] = secondWord[j];
    }
    result[i + j] = '\0';
    printf("A concatenação: %s", result);
}