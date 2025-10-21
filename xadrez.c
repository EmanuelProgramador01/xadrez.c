#include <stdio.h>

int main() {
    // =======================
    // MOVIMENTO DA TORRE
    // =======================
    // A Torre se move em linha reta, horizontalmente ou verticalmente.
    // Aqui, ela vai se mover 5 casas para a direita.
    // Estrutura usada: for

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar as peças
    printf("\n");

    // =======================
    // MOVIMENTO DO BISPO
    // =======================
    // O Bispo se move na diagonal.
    // Aqui, ele vai se mover 5 casas na diagonal para cima e à direita.
    // Estrutura usada: while

    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Linha em branco para separar as peças
    printf("\n");

    // =======================
    // MOVIMENTO DA RAINHA
    // =======================
    // A Rainha pode se mover em todas as direções.
    // Aqui, ela vai se mover 8 casas para a esquerda.
    // Estrutura usada: do-while

    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Linha em branco para separar as peças
    printf("\n");

    // =======================
    // MOVIMENTO DO CAVALO
    // =======================
    // O Cavalo se move em "L": duas casas em uma direção e uma casa perpendicular.
    // Aqui: duas casas para baixo e uma para a esquerda.
    // Estruturas usadas: for (obrigatória) + while (aninhada)
    
    printf("Movimento do Cavalo:\n");
    int movimentosBaixo = 2;   // duas casas para baixo
    int movimentosEsquerda = 1; // uma casa para a esquerda

    // Loop externo: controla as casas para baixo
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");

        // Loop interno: simula o movimento para a esquerda após as duas descidas
        if (i == movimentosBaixo) { // só faz o movimento lateral no final
            int contador = 1;
            while (contador <= movimentosEsquerda) {
                printf("Esquerda\n");
                contador++;
            }
        }
    }

    // Fim do programa
    return 0;
}
