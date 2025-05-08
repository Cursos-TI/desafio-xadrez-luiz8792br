#include <stdio.h>

int main() {
    // === TORRE ===
    // Movimento: 5 casas para a direita
    // Estrutura: for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    // === BISPO ===
    // Movimento: 5 casas na diagonal (cima + direita)
    // Estrutura: while
    printf("\nMovimento do Bispo (5 casas na diagonal: cima e direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita (%d)\n", j);
        j++;
    }

    // === RAINHA ===
    // Movimento: 8 casas para a esquerda
    // Estrutura: do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
