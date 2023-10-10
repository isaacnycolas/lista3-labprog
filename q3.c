#include <stdio.h>
#include <string.h>

#define TAM 50

int main() {
   char word[TAM];
    int count = 0;

    printf("Digite uma palavra: ");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] != '\n') {
            count++;
        }
    }

    printf("A quantidade de caracteres na string é: %d\n", count);

    return 0;
}
