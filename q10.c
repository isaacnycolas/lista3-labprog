#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINE 3
#define COL 3

int main() {
    int matriz[LINE][COL];  
    int x;
    int contador = 0;

    srand(time(NULL));

    printf("Matriz gerada com elementos aleatórios:\n");
    for (int i = 0; i < LINE; i++) {
        for (int j = 0; j < COL; j++) {
            matriz[i][j] = rand() % 10 + 1; 
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um valor inteiro para contar na matriz: ");
    scanf("%d", &x);

    for (int i = 0; i < LINE; i++) {
        for (int j = 0; j < COL; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0;
}
