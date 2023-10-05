#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main(){
    float vetor[TAM];

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        vetor[i] = ((float)rand() / RAND_MAX) * 10;
    }

    float maior, menor;
    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < TAM; i++){
        if(vetor[i]> maior){
            maior = vetor[i];
        }
    }
    for(int i = 0; i < TAM; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    float somatorio = maior + menor;
    printf("\nA soma entre o maior e o menor: %f", somatorio);
}