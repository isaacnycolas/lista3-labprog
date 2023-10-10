#include <stdio.h>

#define TAM 30
#define MIN 1

int main() {
    char name[TAM];
    char character[1];
    printf("Digite teu nome: ");
    fgets(name, TAM, stdin); 

    printf("Digite um caractere: ");
    scanf("%c", &character);

    for(int i = 0; i < MIN; i++){
        if(name[i] == character[i]){
            puts("O caractere inserido é igual a letra inicial da palavra!");
        }else{
            puts("O caractere e a letra são diferentes");
        }
    }

    return 0;
}
