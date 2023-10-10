#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define INI 0
#define MAX 19

int main() {
    int numbers[TAM];
    int media = 0;
    float average, averageGeo;
    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        numbers[i] = INI + rand() % MAX;
        media += numbers[i];
        printf("%d \n", numbers[i]);
    }
    average = (float)media/TAM;
    printf("Média aritmética: %.2f\n", average);
    
    media = 1;
    for(int i = 0; i< TAM; i++){
        media *= numbers[i];
    }
    averageGeo = pow((float)media, (1.0 /TAM));
    printf("Média geométrica: %.2f", averageGeo);
    return 0;
}
