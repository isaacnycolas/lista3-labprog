#include <stdio.h>

#define LINE 3
#define COL 3

int main(){
    int matrix[LINE][COL];

    for (int i = 0; i < LINE; i++) {
        for (int j = 0; j < COL; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    puts("Elementos da diagonal principal: ");
     for (int i = 0; i < LINE; i++) {
        for (int j = 0; j < COL; j++) {
            if( i == j){
                printf("%d ", matrix[i][j]);
            }
        }
    }
}