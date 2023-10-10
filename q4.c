#include <stdio.h>
#include <string.h>

#define TAM 30

int main(){
    char firstName[TAM];
    char secondName[TAM];

    puts("Digite o primeiro nome:");
    fgets(firstName, TAM, stdin);
    puts("Digite o segundo nome:");
    fgets(secondName, TAM, stdin);

    if(strcmp(firstName, secondName) == 0){
        puts("Os nomes são iguais!");
    }else{
        puts("Os nomes não são iguais!");
    }

}