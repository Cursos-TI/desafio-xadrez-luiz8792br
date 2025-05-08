#include <stdio.h>

// === TORRE (recursividade) ===
// Move-se 5 casas para a direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita (%d)\n", 6 - passos);
    moverTorre(passos - 1);
}

// === BISPO (recursividade + loops aninhados) ===
// Move-se 5 casas na diagonal (Cima + Direita)
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita (%d)\n", 6 - passos);
    moverBispoRecursivo(passos - 1);
}

// === RAINHA (recursividade) ===
// Move-se 8 casas para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda (%d)\n", 9 - passos);
    moverRainha(passos - 1);
}

// === CAVALO (loops aninhados com múltiplas variáveis e controle de fluxo) ===
// Move-se em "L": 2 casas para cima e 1 para a direita
void moverCavalo() {
    printf("\nMovimento do Cavalo (em L: 2 casas para cima e 1 para a direita):\n");

    const int movimentosVerticais = 2;
    const int movimentosHorizontais = 1;

    for (int v = 1; v <= movimentosVerticais; v++) {
        if (v == 2) {
            // Segunda parte do movimento, faz o movimento horizontal
            for (int h = 1; h <= movimentosHorizontais; h++) {
                if (h == 1) {
                    printf("Direita (%d)\n", h);
                } else {
                    // Não necessário, mas serve de exemplo de controle com continue
                    continue;
                }
            }
        }
        if (v > movimentosVerticais) break; // exemplo de controle
        printf("Cima (%d)\n", v);
    }
}

// === BISPO (loops aninhados) ===
// Extra: exemplo de movimento usando loops verticais e horizontais
void moverBispoComLoops() {
    printf("\nMovimento do Bispo (usando loops aninhados: cima e direita):\n");

    const int casas = 5;
    for (int i = 1; i <= casas; i++) {  // loop vertical
        for (int j = 1; j <= 1; j++) {  // loop horizontal (simulando a direção)
            printf("Cima Direita (%d)\n", i);
        }
    }
}

// === MAIN ===
int main() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    printf("\nMovimento do Bispo (recursivo - 5 casas na diagonal):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    moverCavalo(); // com loops complexos

    moverBispoComLoops(); // adicional: bispo com loops aninhados

    return 0;
}
