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
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = temp;
        }
    }

    printf("Vetor ordenado pelo método de seleção:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
