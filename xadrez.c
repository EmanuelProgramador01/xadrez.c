#include <stdio.h>

int main() {
    int i;

    // ============================
    // PEÇA 1: TORRE (usa FOR)
    // ============================
    printf("Movimentos da TORRE (usando for):\n");
    // A torre se move em linha reta — para frente e para os lados.
    for (i = 1; i <= 8; i++) {
        printf("Linha %d, Coluna 4\n", i); // movimento vertical
    }
    for (i = 1; i <= 8; i++) {
        printf("Linha 4, Coluna %d\n", i); // movimento horizontal
    }

    // ============================
    // PEÇA 2: BISPO (usa WHILE)
    // ============================
    printf("\nMovimentos do BISPO (usando while):\n");
    // O bispo se move em diagonais.
    int linha = 1;
    int coluna = 1;
    while (linha <= 8 && coluna <= 8) {
        printf("Linha %d, Coluna %d\n", linha, coluna);
        linha++;
        coluna++;
    }

    // ============================
    // PEÇA 3: CAVALO (usa DO-WHILE)
    // ============================
    printf("\nMovimentos do CAVALO (usando do-while):\n");
    // O cavalo se move em "L" (2 casas em uma direção e 1 em outra)
    int movimentos = 1;
    do {
        printf("Movimento %d: (2 para frente, 1 para o lado)\n", movimentos);
        movimentos++;
    } while (movimentos <= 8);

    return 0;
}
