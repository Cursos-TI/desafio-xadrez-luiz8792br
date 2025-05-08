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

    // === CAVALO ===
    // Movimento: 2 casas para baixo e 1 para a esquerda
    // Estrutura: for + while (aninhados)
    printf("\nMovimento do Cavalo (em L: 2 casas para baixo e 1 para a esquerda):\n");

    const int movimentosParaBaixo = 2;
    const int movimentosParaEsquerda = 1;

    for (int passo = 1; passo <= movimentosParaBaixo; passo++) {
        printf("Baixo (%d)\n", passo);

        // Loop aninhado (while) para movimentar para esquerda após os movimentos para baixo
        if (passo == movimentosParaBaixo) {
            int l = 1;
            while (l <= movimentosParaEsquerda) {
                printf("Esquerda (%d)\n", l);
                l++;
            }
        }
    }

    return 0;
}
