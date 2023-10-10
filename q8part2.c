#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 100
int main() {
    int vetor[N];
    int intervalo_min, intervalo_max;

    printf("Digite o valor mínimo do intervalo: ");
    scanf("%d", &intervalo_min);
    printf("Digite o valor máximo do intervalo: ");
    scanf("%d", &intervalo_max);

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % (intervalo_max - intervalo_min + 1) + intervalo_min;
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado pelo método de bolha (bubble sort):\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
