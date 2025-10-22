#include <stdio.h>

// ========================
// Função recursiva da TORRE
// ========================
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base: parou de andar
    printf("Direita\n");
    moverTorre(casas - 1); // Chama novamente para mover a próxima casa
}

// ========================
// Função recursiva do BISPO
// (usa também loops aninhados)
// ========================
void moverBispo(int casas) {
    if (casas == 0) return; // Caso base: fim da recursão

    // Loop aninhado: move 1 casa na diagonal (cima + direita)
    for (int i = 0; i < 1; i++) {      // movimento vertical
        for (int j = 0; j < 1; j++) {  // movimento horizontal
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // Chama recursivamente até terminar as casas
}

// ========================
// Função recursiva da RAINHA
// ========================
void moverRainha(int casas) {
    if (casas == 0) return; // Caso base: fim da recursão
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ========================
// Função do CAVALO (loops aninhados complexos)
// ========================
void moverCavalo() {
    int movimentoVertical = 2; // Duas casas para cima
    int movimentoHorizontal = 1; // Uma casa para a direita

    printf("\nMovimento do Cavalo:\n");

    // Loop aninhado para simular o movimento em "L"
    for (int i = 1; i <= movimentoVertical; i++) {
        printf("Cima\n");
        if (i == movimentoVertical) {
            // Quando terminar de subir, inicia o movimento horizontal
            for (int j = 1; j <= movimentoHorizontal; j++) {
                printf("Direita\n");
                // Apenas para exemplo de uso de break/continue:
                if (j == movimentoHorizontal) break; // Encerra após mover 1 casa
            }
        }
    }
}

// ========================
// Função principal
// ========================
int main() {
    printf("*** MOVIMENTOS DAS PEÇAS DE XADREZ ***\n\n");

    // ---------------- Torre ----------------
    printf("Movimento da Torre:\n");
    moverTorre(5); // Move 5 casas para a direita

    printf("\n");

    // ---------------- Bispo ----------------
    printf("Movimento do Bispo:\n");
    moverBispo(5); // Move 5 casas na diagonal (cima + direita)

    printf("\n");

    // ---------------- Rainha ----------------
    printf("Movimento da Rainha:\n");
    moverRainha(8); // Move 8 casas para a esquerda

    printf("\n");

    // ---------------- Cavalo ----------------
    moverCavalo(); // Move em L (duas para cima e uma para a direita)

    printf("\n*** Fim da simulação ***\n");

    return 0;
}
