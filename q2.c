#include <stdio.h>

int main() {
    char name[30];
    printf("Digite teu nome: ");
    fgets(name, sizeof(name), stdin); // Adicione o ponto e vírgula aqui
    printf("Teu nome: %s", name);

    return 0;
}
