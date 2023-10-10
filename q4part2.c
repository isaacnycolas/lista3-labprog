#include <stdio.h>
#include <string.h> 

#define TAM 30
int main(){
    char firstWord[TAM];
    char secondWord[TAM];

    puts("Digite a primeira palavra:");
    fgets(firstWord, TAM, stdin);
    puts("Digite a segunda palavra:");
    fgets(secondWord, TAM, stdin);

    for(int i = 0; i < strlen(firstWord); i++){
        if(firstWord[i] != secondWord[i]){
            puts("As palavras não são iguais!");
            return 0; 
        }
    }
    puts("As palavras são iguais!");
}
